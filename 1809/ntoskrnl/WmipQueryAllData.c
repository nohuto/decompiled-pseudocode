/*
 * XREFs of WmipQueryAllData @ 0x14059EBCC
 * Callers:
 *     WmipIoControl @ 0x1406AB080 (WmipIoControl.c)
 *     IoWMIQueryAllData @ 0x1407604C0 (IoWMIQueryAllData.c)
 *     WmipQueryAllDataMultiple @ 0x1408B4C84 (WmipQueryAllDataMultiple.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140013530 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipInsertStaticNames @ 0x14059E964 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x14059EB44 (WmipStaticInstanceNameSize.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     WmipForwardWmiIrp @ 0x1405FC974 (WmipForwardWmiIrp.c)
 *     WmipSendWmiIrp @ 0x1405FCEA0 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipPrepareForWnodeAD @ 0x1406BF364 (WmipPrepareForWnodeAD.c)
 */

__int64 __fastcall WmipQueryAllData(void *a1, IRP *a2, KPROCESSOR_MODE a3, __int64 a4, int a5, unsigned int *a6)
{
  unsigned int *v6; // rsi
  __int64 v7; // r14
  PVOID v8; // r13
  NTSTATUS v9; // eax
  int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  char v13; // r9
  unsigned int v14; // edx
  char v15; // r15
  __int64 *v16; // rcx
  _BYTE *v17; // r8
  unsigned int v18; // r12d
  __int128 v19; // xmm6
  int v20; // r14d
  _BYTE *v21; // r13
  __int64 v22; // rax
  _BYTE *v23; // rsi
  char *v24; // rax
  __int64 v25; // rdx
  IRP *v26; // rax
  int v27; // eax
  unsigned int *v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // ecx
  bool v31; // zf
  unsigned int v33; // eax
  unsigned int v34; // esi
  unsigned int v35; // eax
  int v36; // eax
  unsigned int v37; // ecx
  __int128 v38; // xmm0
  char v39; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v40; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v41; // [rsp+40h] [rbp-C8h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  char *v43; // [rsp+50h] [rbp-B8h]
  _BYTE *v44; // [rsp+58h] [rbp-B0h]
  PVOID P; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-A0h]
  _BYTE *v47; // [rsp+70h] [rbp-98h]
  PIRP Irp; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+80h] [rbp-88h]
  unsigned int *v50; // [rsp+88h] [rbp-80h]
  __int128 v51; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v52[80]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v53[128]; // [rsp+F8h] [rbp-10h] BYREF

  v6 = a6;
  v7 = a4;
  v49 = a4;
  v8 = a1;
  Irp = a2;
  v50 = a6;
  Object = a1;
  if ( a1 )
  {
    v9 = ObReferenceObjectByPointer(a1, 1u, WmipGuidObjectType, a3);
  }
  else
  {
    v9 = ObReferenceObjectByHandle(*(HANDLE *)(a4 + 16), 1u, WmipGuidObjectType, a3, &Object, 0LL);
    v8 = Object;
  }
  v10 = v9;
  if ( v9 < 0 )
    return (unsigned int)v10;
  v40 = 16;
  P = v53;
  v10 = WmipPrepareForWnodeAD((_DWORD)v8, (unsigned int)&v51, (unsigned int)&v40, (unsigned int)&P, (__int64)&v39);
  if ( v10 < 0 )
    goto LABEL_39;
  v11 = *(_DWORD *)(v7 + 44);
  LODWORD(v41) = v11;
  if ( v39 )
  {
    *(_DWORD *)(v7 + 12) = 0;
    v38 = v51;
    *(_DWORD *)(v7 + 44) = v11 | 0x100;
    v10 = 0;
    *(_OWORD *)(v7 + 24) = v38;
    *a6 = 48;
    goto LABEL_39;
  }
  v12 = 0;
  v47 = 0LL;
  v13 = 0;
  v14 = a5;
  v15 = 0;
  v16 = (__int64 *)P;
  v17 = (_BYTE *)v7;
  v44 = (_BYTE *)v7;
  v18 = a5;
  v39 = 0;
  v10 = -1073741163;
  if ( !v40 )
    goto LABEL_34;
  v19 = v51;
  v20 = v41;
  v21 = v47;
  v43 = (char *)P;
  v46 = v40;
  do
  {
    v22 = *v16;
    v41 = *v16;
    if ( v15 || v13 || v18 < 0x48 )
    {
      v23 = v52;
      memset(v52, 0, 0x48uLL);
      v22 = v41;
      v18 = 72;
      v39 = 1;
    }
    else
    {
      v23 = v17;
    }
    *(_DWORD *)v23 = 48;
    v40 = *(_DWORD *)(v22 + 16) & 3;
    v24 = v43;
    *((_DWORD *)v23 + 11) = v20 | (v40 != 0 ? 0x80 : 0);
    *(_OWORD *)(v23 + 24) = v19;
    v25 = *(unsigned int *)(*(_QWORD *)v24 + 80LL);
    *((_DWORD *)v23 + 3) = 0;
    v26 = Irp;
    *((_DWORD *)v23 + 1) = v25;
    if ( v26 )
      v27 = WmipForwardWmiIrp(v26, v18, (__int64)v23);
    else
      v27 = WmipSendWmiIrp(0LL, v25, v23 + 24, v18, v23, &v51);
    *((_DWORD *)v23 + 1) = 0;
    if ( v27 >= 0 )
    {
      if ( (*((_DWORD *)v23 + 11) & 0x20) != 0 )
      {
        if ( *((_DWORD *)v23 + 12) <= v18 )
          v27 = -1073741823;
      }
      else if ( !*((_DWORD *)v23 + 13) )
      {
        v27 = -1073741163;
      }
      if ( v27 >= 0 )
      {
        if ( (*((_DWORD *)v23 + 11) & 0x20) != 0 )
        {
          v33 = *((_DWORD *)v23 + 12);
        }
        else
        {
          if ( !v39 )
          {
            if ( v21 )
              *((_DWORD *)v21 + 3) = (_DWORD)v23 - (_DWORD)v21;
            v21 = v23;
            if ( v40 )
            {
              WmipInsertStaticNames((unsigned int *)v23, v18, v41);
              if ( (*((_DWORD *)v23 + 11) & 0x20) != 0 )
              {
                v15 = 1;
                v28 = (unsigned int *)(v23 + 48);
              }
              else
              {
                v28 = (unsigned int *)v23;
              }
              v29 = *v28;
            }
            else
            {
              v29 = *(_DWORD *)v23;
            }
            v30 = (v29 + 7) & 0xFFFFFFF8;
            if ( v29 + 7 < v29 )
              v30 = v29;
            v12 += v30;
            if ( !v15 && v18 >= v30 )
            {
              v18 -= v30;
              v44 += v30;
              goto LABEL_32;
            }
            goto LABEL_49;
          }
          v33 = *(_DWORD *)v23;
        }
        if ( v33 < 0x48 )
          v33 = 72;
        v34 = v33 + v12;
        if ( v40 )
        {
          v36 = WmipStaticInstanceNameSize(v41);
          v37 = (v34 + 3) & 0xFFFFFFFC;
          if ( v34 + 3 < v34 )
            v37 = v34;
          v34 = v37 + v36;
        }
        v12 = (v34 + 7) & 0xFFFFFFF8;
        if ( v34 + 7 < v34 )
          v12 = v34;
LABEL_49:
        v15 = 1;
      }
    }
LABEL_32:
    WmipUnreferenceEntry(&WmipISChunkInfo, v41);
    v13 = v39;
    v16 = (__int64 *)(v43 + 8);
    v31 = v46-- == 1;
    v17 = v44;
    v43 += 8;
  }
  while ( !v31 );
  v7 = v49;
  v8 = Object;
  v16 = (__int64 *)P;
  v6 = v50;
  v14 = a5;
LABEL_34:
  if ( v12 )
  {
    if ( v15 )
    {
      *(_DWORD *)(v7 + 44) = 32;
      *(_DWORD *)v7 = 56;
      v35 = v14 + 64;
      if ( v12 > v14 )
        v35 = v12;
      *(_DWORD *)(v7 + 48) = v35;
      *v6 = 56;
    }
    else
    {
      *v6 = v12;
    }
    v10 = 0;
  }
  if ( v16 != (__int64 *)v53 && v16 )
    ExFreePoolWithTag(v16, 0);
LABEL_39:
  ObfDereferenceObject(v8);
  return (unsigned int)v10;
}
