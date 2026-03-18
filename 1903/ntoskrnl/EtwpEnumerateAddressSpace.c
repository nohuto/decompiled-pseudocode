/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x1405E9F34
 * Callers:
 *     EtwTraceProcess @ 0x140690330 (EtwTraceProcess.c)
 *     EtwpProcessEnumCallback @ 0x140707DB0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpTraceImageUnload @ 0x14001C640 (EtwpTraceImageUnload.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAreAllApcsDisabled @ 0x1400C17F0 (KeAreAllApcsDisabled.c)
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1406BE140 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     EtwpTraceImageRundown @ 0x1407121D8 (EtwpTraceImageRundown.c)
 */

void __fastcall EtwpEnumerateAddressSpace(ULONG_PTR a1, __int64 a2, int *a3)
{
  int v3; // r13d
  int v4; // eax
  ULONG_PTR v6; // r9
  int v7; // ecx
  int v8; // edx
  int v9; // ebx
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v11; // r14
  _QWORD *v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // rdi
  __m128i *v15; // r15
  int v16; // r12d
  unsigned __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r13
  void *v20; // rcx
  int v21; // eax
  ULONG_PTR v22; // r12
  void *v23; // rax
  int v24; // r13d
  unsigned int v25; // eax
  unsigned __int16 v26; // dx
  unsigned int v27; // r8d
  char v28; // cl
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __m128i v31; // xmm1
  int v32; // eax
  __m128i v33; // xmm0
  char v34; // dl
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  char v40; // [rsp+28h] [rbp-D8h]
  unsigned __int16 v41; // [rsp+50h] [rbp-B0h]
  int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h]
  int v44; // [rsp+5Ch] [rbp-A4h]
  int v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+64h] [rbp-9Ch]
  int v47; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-90h]
  int v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  __int64 v51; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v52; // [rsp+90h] [rbp-70h]
  unsigned __int64 v53; // [rsp+98h] [rbp-68h]
  __int64 v54; // [rsp+A0h] [rbp-60h]
  void *v55; // [rsp+A8h] [rbp-58h]
  _QWORD *v56; // [rsp+B0h] [rbp-50h]
  __m128i v57; // [rsp+B8h] [rbp-48h]
  __m128i v58; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v59; // [rsp+108h] [rbp+8h] BYREF
  __int64 v60; // [rsp+110h] [rbp+10h]
  unsigned __int64 *v61; // [rsp+118h] [rbp+18h] BYREF
  unsigned int v62; // [rsp+120h] [rbp+20h]
  int v63; // [rsp+124h] [rbp+24h]

  HIWORD(v4) = 0;
  BugCheckParameter1 = a1;
  v59 = 0LL;
  v60 = 0LL;
  v6 = a1;
  if ( !a3 || (v4 = *a3, v7 = 1, (*a3 & 4) == 0) )
    v7 = 0;
  HIWORD(v8) = 0;
  if ( !a3 || (v4 = a3[1], LOBYTE(v4) = 1, (a3[1] & 0x8000) == 0) )
    LOBYTE(v4) = 0;
  v9 = v7 | 4;
  if ( !(_BYTE)v4 )
    v9 = v7;
  if ( a2 )
  {
    if ( a3 )
    {
      v4 = *a3;
      if ( (*a3 & 0x8000) != 0 )
        v9 |= 2u;
    }
  }
  if ( !v9 )
  {
    v11 = 0LL;
    goto LABEL_34;
  }
  if ( a2 )
  {
    v28 = *(_BYTE *)(a2 + 64);
    v11 = *(unsigned __int16 **)(a2 + 16);
    v50 = *(_QWORD *)(a2 + 32);
    LOWORD(v8) = 5124 - (v28 != 0);
    v45 = v8;
    LOWORD(v3) = 1064 - (v28 != 0);
    LOWORD(v4) = 641 - (v28 != 0);
    v47 = v4;
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x66726550u);
    v6 = BugCheckParameter1;
    v50 = 0LL;
    v11 = PoolWithTag;
    v45 = 0;
    v3 = 1062;
    v47 = 611;
  }
  v44 = v3;
  if ( !v11 )
  {
    v9 &= ~1u;
    if ( !v9 )
      goto LABEL_34;
  }
  LODWORD(v54) = 0;
  LODWORD(v53) = 0;
  v52 = 0LL;
  v41 = 0;
  v43 = 0;
  v42 = 0;
  v12 = (_QWORD *)MmEnumerateAddressSpaceAndReferenceImages(v6);
  v56 = v12;
  if ( !v12 )
    goto LABEL_34;
  v13 = *v12;
  if ( !*v12 )
    goto LABEL_33;
  v14 = v12 + 1;
  do
  {
    v49 = 0;
    v15 = (__m128i *)(v14 - 1);
    *(v14 - 1) = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    v16 = 0;
    if ( (v13 & 3) == 0 )
    {
      if ( (v9 & 2) != 0 )
      {
        v29 = *v14;
        v30 = *v14;
        v46 = 1;
        v54 = (v30 >> 1) & 0x1F;
        v52 = v14[3];
        v17 = v29 & 0xFFFFFFFFFFFFFFC0uLL;
        v53 = v29 & 1;
      }
      else
      {
        v17 = *v14;
        v46 = 0;
      }
      *v14 = v17 & 0xFFFFFFFFFFFFE03FuLL;
      v18 = (v17 >> 6) & 0xF;
      v19 = (v17 >> 10) & 7;
      v51 = 0LL;
      if ( KeAreAllApcsDisabled() )
        __int2c();
      v20 = (void *)v15->m128i_i64[0];
      if ( FltMgrCallbacks
        && (v21 = (*(__int64 (__fastcall **)(void *, __int64, unsigned __int16 *, __int64 *))(FltMgrCallbacks + 24))(
                    v20,
                    1024LL,
                    v11,
                    &v51),
            v20 = (void *)v15->m128i_i64[0],
            v21 >= 0)
        || (int)ObQueryNameStringMode((_DWORD)v20, (_DWORD)v11, 0x2000, (unsigned int)&v42, 0) >= 0 )
      {
        v40 = v18;
        v22 = BugCheckParameter1;
        if ( a2 )
          EtwpTraceImageRundown(
            v50,
            (unsigned __int16)v45,
            (_DWORD)v11,
            *(_QWORD *)(BugCheckParameter1 + 744),
            (__int64)(v14 - 1),
            v40,
            v19);
        else
          EtwpTraceImageUnload(v11, BugCheckParameter1, (void *)*v14, v14[2], *((_DWORD *)v14 + 8), v40, v19, 0, 1);
      }
      else
      {
        v22 = BugCheckParameter1;
      }
      if ( v51 )
        (*(void (**)(void))(FltMgrCallbacks + 32))();
      v23 = (void *)v15->m128i_i64[0];
      v24 = v46;
      v55 = (void *)v15->m128i_i64[0];
      if ( v46 )
      {
        v31 = v15[1];
        v57 = *v15;
        v58 = v31;
        memset(v14 - 1, 0, 0x30uLL);
        v32 = *(_DWORD *)(v22 + 744);
        v16 = 3;
        v33 = v57;
        v34 = v53;
        *((_DWORD *)v14 + 8) = v32;
        v35 = *(_QWORD *)(v33.m128i_i64[0] + 24);
        v14[3] = v52;
        v36 = v54 & 0x1F;
        *v14 = v35;
        v15->m128i_i64[0] = _mm_srli_si128(v33, 8).m128i_u64[0];
        v37 = v14[1] & 0xFF40FFFFFFFFFFFFuLL | ((v36 | (32LL * (v34 & 1))) << 48) | 0x40000000000000LL;
        v14[2] = _mm_srli_si128(v58, 8).m128i_u64[0];
        v41 = v44;
        v23 = v55;
        v14[1] = v37;
        v43 = 0x8000;
        v42 = 44;
      }
      else
      {
        v16 = v49;
      }
      ObfDereferenceObject(v23);
      v25 = v42;
      v26 = v41;
      v27 = v43;
LABEL_30:
      if ( !v24 )
        goto LABEL_31;
      goto LABEL_54;
    }
    if ( (v13 & 3) != 2 )
    {
      v25 = 44;
      v26 = v3;
      v27 = 0x8000;
      v41 = v3;
      v43 = 0x8000;
      v42 = 44;
      v16 = 3;
      v24 = 1;
      goto LABEL_30;
    }
    v26 = v47;
    v27 = 536903680;
    v41 = v47;
    v43 = 536903680;
    if ( a2 )
    {
      v25 = 32;
      v42 = 32;
    }
    else
    {
      v42 = 24;
      *((_DWORD *)v14 + 3) = 0x8000;
      v25 = v42;
    }
LABEL_54:
    if ( a2 )
    {
      v38 = 5249026;
      if ( v16 )
        v38 = v16 | 0x501800;
      v60 = v25;
      v59 = v14 - 1;
      EtwpLogKernelEvent((__int64)&v59, *(_QWORD *)(v50 + 1112), *(_DWORD *)v50, 1u, v26, v38);
    }
    else
    {
      v39 = 5249282;
      if ( v16 )
        v39 = v16 | 0x501900;
      v61 = v14 - 1;
      v62 = v25;
      v63 = 0;
      EtwTraceKernelEvent((__int64)&v61, 1u, v27, v26, v39);
    }
LABEL_31:
    v13 = v14[5];
    v14 += 6;
    LOWORD(v3) = v44;
  }
  while ( v13 );
  v12 = v56;
LABEL_33:
  ExFreePoolWithTag(v12, 0);
LABEL_34:
  if ( !a2 )
  {
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
}
