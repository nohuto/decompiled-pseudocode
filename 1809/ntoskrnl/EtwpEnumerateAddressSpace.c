/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x1405F6E18
 * Callers:
 *     EtwTraceProcess @ 0x14066D6E8 (EtwTraceProcess.c)
 *     EtwpProcessEnumCallback @ 0x1407277C0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     EtwpTraceImageUnload @ 0x140089314 (EtwpTraceImageUnload.c)
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     KeAreAllApcsDisabled @ 0x1400CAB70 (KeAreAllApcsDisabled.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 *     EtwpTraceImageRundown @ 0x1407419EC (EtwpTraceImageRundown.c)
 */

void __fastcall EtwpEnumerateAddressSpace(ULONG_PTR a1, __int64 a2, int *a3)
{
  int v3; // eax
  ULONG_PTR v4; // r13
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
  void *v22; // rax
  int v23; // eax
  unsigned __int16 v24; // dx
  int v25; // ecx
  unsigned int v26; // r8d
  char v27; // cl
  char v28; // cl
  __m128i v29; // xmm1
  int v30; // eax
  __m128i v31; // xmm0
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  char v38; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v39; // [rsp+50h] [rbp-B0h]
  int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h]
  int v42; // [rsp+5Ch] [rbp-A4h]
  int v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+64h] [rbp-9Ch]
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-98h]
  int v46; // [rsp+70h] [rbp-90h]
  int v47; // [rsp+74h] [rbp-8Ch]
  BOOL v48; // [rsp+78h] [rbp-88h]
  __int64 v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  void *v54; // [rsp+A8h] [rbp-58h]
  _QWORD *v55; // [rsp+B0h] [rbp-50h]
  __m128i v56; // [rsp+B8h] [rbp-48h]
  __m128i v57; // [rsp+C8h] [rbp-38h]
  unsigned __int64 *v58; // [rsp+108h] [rbp+8h] BYREF
  int v59; // [rsp+110h] [rbp+10h]
  int v60; // [rsp+114h] [rbp+14h]
  unsigned __int64 *v61; // [rsp+118h] [rbp+18h] BYREF
  int v62; // [rsp+120h] [rbp+20h]
  int v63; // [rsp+124h] [rbp+24h]

  BugCheckParameter1 = a1;
  v6 = a1;
  if ( !a3 || (v3 = *a3, v7 = 1, (*a3 & 4) == 0) )
    v7 = 0;
  HIWORD(v8) = 0;
  if ( !a3 || (v3 = a3[1], LOBYTE(v3) = 1, (a3[1] & 0x8000) == 0) )
    LOBYTE(v3) = 0;
  v9 = v7 | 4;
  if ( !(_BYTE)v3 )
    v9 = v7;
  if ( a2 )
  {
    if ( a3 )
    {
      v3 = *a3;
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
    v27 = *(_BYTE *)(a2 + 104);
    v11 = *(unsigned __int16 **)(a2 + 16);
    v49 = *(_QWORD *)(a2 + 32);
    LOWORD(v8) = 5124 - (v27 != 0);
    v43 = v8;
    LOWORD(v4) = 1064 - (v27 != 0);
    LOWORD(v3) = 641 - (v27 != 0);
    v44 = v3;
  }
  else
  {
    PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2000uLL, 0x66726550u);
    v6 = BugCheckParameter1;
    v49 = 0LL;
    v11 = PoolWithTag;
    v43 = 0;
    LODWORD(v4) = 1062;
    v44 = 611;
  }
  v42 = v4;
  if ( !v11 )
  {
    v9 &= ~1u;
    if ( !v9 )
      goto LABEL_34;
  }
  LODWORD(v53) = 0;
  LODWORD(v52) = 0;
  v51 = 0LL;
  v39 = 0;
  v41 = 0;
  v40 = 0;
  v12 = MmEnumerateAddressSpaceAndReferenceImages(v6, v9);
  v55 = v12;
  if ( !v12 )
    goto LABEL_34;
  v13 = *v12;
  if ( !*v12 )
    goto LABEL_33;
  v14 = v12 + 1;
  do
  {
    v47 = 0;
    v15 = (__m128i *)(v14 - 1);
    *(v14 - 1) = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    v16 = 0;
    if ( (v13 & 3) == 0 )
    {
      v46 = v9 & 2;
      v48 = v46 != 0;
      v17 = *v14;
      if ( (v9 & 2) != 0 )
      {
        v28 = *v14;
        v53 = (v17 >> 1) & 0x1F;
        v51 = v14[3];
        v17 &= 0xFFFFFFFFFFFFFFC0uLL;
        *v14 = v17;
        v52 = v28 & 1;
      }
      *v14 = v17 & 0xFFFFFFFFFFFFE03FuLL;
      v18 = (v17 >> 6) & 0xF;
      v19 = (v17 >> 10) & 7;
      v50 = 0LL;
      if ( KeAreAllApcsDisabled() )
        __int2c();
      v20 = (void *)v15->m128i_i64[0];
      if ( FltMgrCallbacks
        && (v21 = (*(__int64 (__fastcall **)(void *, __int64, unsigned __int16 *, __int64 *))(FltMgrCallbacks + 24))(
                    v20,
                    1024LL,
                    v11,
                    &v50),
            v20 = (void *)v15->m128i_i64[0],
            v21 >= 0)
        || (int)ObQueryNameStringMode((_DWORD)v20, (_DWORD)v11, 0x2000, (unsigned int)&v40, 0) >= 0 )
      {
        v38 = v19;
        v4 = BugCheckParameter1;
        if ( a2 )
          EtwpTraceImageRundown(
            v49,
            (unsigned __int16)v43,
            (_DWORD)v11,
            *(_QWORD *)(BugCheckParameter1 + 736),
            (__int64)(v14 - 1),
            v18,
            v38);
        else
          EtwpTraceImageUnload(v11, BugCheckParameter1, (void *)*v14, v14[2], *((_DWORD *)v14 + 8), v18, v38, 0, 1);
      }
      else
      {
        v4 = BugCheckParameter1;
      }
      if ( v50 )
        (*(void (**)(void))(FltMgrCallbacks + 32))();
      v22 = (void *)v15->m128i_i64[0];
      v54 = (void *)v15->m128i_i64[0];
      if ( v46 )
      {
        v29 = v15[1];
        v56 = *v15;
        v57 = v29;
        memset(v14 - 1, 0, 0x30uLL);
        v30 = *(_DWORD *)(v4 + 736);
        v16 = 3;
        v31 = v56;
        LOWORD(v4) = v42;
        v32 = v52 & 1;
        *((_DWORD *)v14 + 8) = v30;
        v39 = v4;
        v33 = *(_QWORD *)(v31.m128i_i64[0] + 24);
        v14[3] = v51;
        v34 = v53 & 0x1F;
        *v14 = v33;
        v15->m128i_i64[0] = _mm_srli_si128(v31, 8).m128i_u64[0];
        v35 = v14[1] & 0xFF40FFFFFFFFFFFFuLL | ((v34 | (32 * v32)) << 48) | 0x40000000000000LL;
        v14[2] = _mm_srli_si128(v57, 8).m128i_u64[0];
        v22 = v54;
        v14[1] = v35;
        v40 = 44;
        v41 = 0x8000;
      }
      else
      {
        v16 = v47;
        LOWORD(v4) = v42;
      }
      ObfDereferenceObject(v22);
      v23 = v40;
      v24 = v39;
      v25 = v48;
      v26 = v41;
LABEL_30:
      if ( !v25 )
        goto LABEL_31;
      goto LABEL_53;
    }
    if ( (v13 & 3) != 2 )
    {
      v23 = 44;
      v24 = v4;
      v26 = 0x8000;
      v39 = v4;
      v41 = 0x8000;
      v40 = 44;
      v16 = 3;
      v25 = 1;
      goto LABEL_30;
    }
    v24 = v44;
    v26 = 536903680;
    v39 = v44;
    v41 = 536903680;
    if ( a2 )
    {
      v23 = 32;
      v40 = 32;
    }
    else
    {
      v40 = 24;
      *((_DWORD *)v14 + 3) = 0x8000;
      v23 = v40;
    }
LABEL_53:
    if ( a2 )
    {
      v36 = 5249026;
      if ( v16 )
        v36 = v16 | 0x501800;
      v59 = v23;
      v58 = v14 - 1;
      v60 = 0;
      EtwpLogKernelEvent((__int64)&v58, *(_QWORD *)(v49 + 1080), *(_DWORD *)v49, 1u, v24, v36);
    }
    else
    {
      v37 = 5249282;
      if ( v16 )
        v37 = v16 | 0x501900;
      v61 = v14 - 1;
      v62 = v23;
      v63 = 0;
      EtwTraceKernelEvent((__int64)&v61, 1u, v26, v24, v37);
    }
LABEL_31:
    v13 = v14[5];
    v14 += 6;
  }
  while ( v13 );
  v12 = v55;
LABEL_33:
  ExFreePoolWithTag(v12, 0);
LABEL_34:
  if ( !a2 )
  {
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
}
