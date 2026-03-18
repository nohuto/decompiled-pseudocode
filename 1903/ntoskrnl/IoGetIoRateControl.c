/*
 * XREFs of IoGetIoRateControl @ 0x1400E7010
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     IoDiskIoAttributionQuery @ 0x1400E6F30 (IoDiskIoAttributionQuery.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400E71BC (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoDiskIoAttributionDereference @ 0x1400E73A8 (IoDiskIoAttributionDereference.c)
 *     PsIoRateControlReference @ 0x1400E75B0 (PsIoRateControlReference.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
  unsigned __int64 *v12; // r12
  unsigned int v13; // r15d
  __int64 v14; // rbx
  __int64 *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r14
  struct _EX_RUNDOWN_REF *v18; // rbx
  struct _EX_RUNDOWN_REF *v19; // rcx
  unsigned __int64 i; // rax
  _DWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // rax
  __int128 v26; // xmm1
  struct _EX_RUNDOWN_REF *v27; // [rsp+38h] [rbp-49h] BYREF
  _BYTE v28[16]; // [rsp+40h] [rbp-41h] BYREF
  _OWORD v29[2]; // [rsp+50h] [rbp-31h] BYREF
  _OWORD v30[2]; // [rsp+70h] [rbp-11h] BYREF

  memset(v30, 0, sizeof(v30));
  memset(v29, 0, sizeof(v29));
  v12 = a7;
  v27 = 0LL;
  v13 = 0;
  *a7 = 0LL;
  if ( (int)IopAcquireReferencesFromIoAttributionHandle(a1, &v27, &a7) < 0 )
  {
LABEL_12:
    v18 = v27;
    goto LABEL_13;
  }
  PsIoRateControlReference((_DWORD)a7, a2, a4, (unsigned int)v28, a5);
  v14 = a6 + 16;
  v15 = (__int64 *)v28;
  v16 = a4 - (_QWORD)v28;
  v17 = 2LL;
  do
  {
    if ( *(__int64 *)((char *)v15 + v16) )
    {
      IoDiskIoAttributionQuery(*v15, v30, v29);
      v25 = *((_QWORD *)&v29[1] + 1);
      v26 = v30[1];
      *(_OWORD *)(v14 - 16) = v30[0];
      *(_OWORD *)v14 = v26;
      *(_QWORD *)(v14 + 8) += v25;
      *(_QWORD *)v14 += *(_QWORD *)&v29[1];
      *(_QWORD *)(v14 - 16) += *(_QWORD *)&v29[0];
      *(_QWORD *)(v14 - 8) += *((_QWORD *)&v29[0] + 1);
      ++v13;
    }
    ++v15;
    v14 += 32LL;
    --v17;
  }
  while ( v17 );
  v18 = v27;
  v19 = v27;
  for ( i = v27[22].Count; i; i = *(_QWORD *)(i + 176) )
    v19 = (struct _EX_RUNDOWN_REF *)i;
  v21 = a8;
  *v12 = v19[3].Count;
  if ( v21 )
  {
    *v21 = 0;
    v22 = *(_QWORD *)(a3 + 544);
    if ( *(_QWORD *)(v22 + 952) )
      v23 = *(_QWORD *)(*(_QWORD *)(v22 + 952) + 1552LL);
    else
      v23 = 0LL;
    if ( v23 && ((unsigned __int64 *)v23 == a7 || *(unsigned __int64 **)(v23 + 1336) == a7) )
      *v21 |= 1u;
    goto LABEL_12;
  }
LABEL_13:
  if ( v18 )
  {
    ExReleaseRundownProtection_0(v18 + 21);
    IoDiskIoAttributionDereference(v18);
  }
  return v13;
}
