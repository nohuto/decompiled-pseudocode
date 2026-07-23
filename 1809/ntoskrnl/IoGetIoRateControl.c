/*
 * XREFs of IoGetIoRateControl @ 0x140105530
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     IoDiskIoAttributionQuery @ 0x140105464 (IoDiskIoAttributionQuery.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1401056B4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     PsIoRateControlReference @ 0x140105ADC (PsIoRateControlReference.c)
 */

__int64 __fastcall IoGetIoRateControl(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 *a7,
        _DWORD *a8)
{
  unsigned __int64 *v8; // r12
  unsigned int v11; // r15d
  __int64 v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r14
  struct _EX_RUNDOWN_REF *v17; // rbx
  struct _EX_RUNDOWN_REF *v18; // rcx
  unsigned __int64 i; // rax
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // rax
  __int128 v25; // xmm1
  struct _EX_RUNDOWN_REF *v26; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v27[16]; // [rsp+40h] [rbp-41h] BYREF
  __int128 v28; // [rsp+50h] [rbp-31h] BYREF
  __int64 v29; // [rsp+60h] [rbp-21h]
  __int64 v30; // [rsp+68h] [rbp-19h]
  _OWORD v31[2]; // [rsp+70h] [rbp-11h] BYREF

  v8 = a7;
  v26 = 0LL;
  v11 = 0;
  *a7 = 0LL;
  if ( (int)IopAcquireReferencesFromIoAttributionHandle(a1, &v26, &a7) < 0 )
  {
LABEL_12:
    v17 = v26;
    goto LABEL_13;
  }
  PsIoRateControlReference((_DWORD)a7, a2, a4, (unsigned int)v27, a5);
  v13 = a6 + 16;
  v14 = (__int64 *)v27;
  v15 = a4 - (_QWORD)v27;
  v16 = 2LL;
  do
  {
    if ( *(__int64 *)((char *)v14 + v15) )
    {
      IoDiskIoAttributionQuery(*v14, v31, &v28);
      v24 = v30;
      v25 = v31[1];
      *(_OWORD *)(v13 - 16) = v31[0];
      *(_OWORD *)v13 = v25;
      *(_QWORD *)(v13 + 8) += v24;
      *(_QWORD *)v13 += v29;
      *(_QWORD *)(v13 - 16) += v28;
      *(_QWORD *)(v13 - 8) += *((_QWORD *)&v28 + 1);
      ++v11;
    }
    ++v14;
    v13 += 32LL;
    --v16;
  }
  while ( v16 );
  v17 = v26;
  v18 = v26;
  for ( i = v26[22].Count; i; i = *(_QWORD *)(i + 176) )
    v18 = (struct _EX_RUNDOWN_REF *)i;
  v20 = a8;
  *v8 = v18[3].Count;
  if ( v20 )
  {
    *v20 = 0;
    v21 = *(_QWORD *)(a3 + 544);
    if ( *(_QWORD *)(v21 + 944) )
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 944) + 1552LL);
    else
      v22 = 0LL;
    if ( v22 && ((unsigned __int64 *)v22 == a7 || *(unsigned __int64 **)(v22 + 1336) == a7) )
      *v20 |= 1u;
    goto LABEL_12;
  }
LABEL_13:
  if ( v17 )
  {
    ExReleaseRundownProtection_0(v17 + 21);
    IoDiskIoAttributionDereference(v17);
  }
  return v11;
}
