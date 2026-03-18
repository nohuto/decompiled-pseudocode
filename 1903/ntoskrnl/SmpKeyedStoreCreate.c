/*
 * XREFs of SmpKeyedStoreCreate @ 0x1406B3794
 * Callers:
 *     SmProcessCreateNotification @ 0x1406900C0 (SmProcessCreateNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     SmpKeyedStoreEntryGet @ 0x14008AF3C (SmpKeyedStoreEntryGet.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14009A4FC (SmKmStoreDeleteWhenEmpty.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14009A788 (SmKmStoreRefFromStoreIndex.c)
 *     SmAlloc @ 0x140108954 (SmAlloc.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SmpDirtyStoreCreate @ 0x1406B3878 (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  int v3; // eax
  _QWORD *v5; // rdi
  int v8; // ebx
  _QWORD *v9; // rax
  int v10; // esi
  unsigned int v12; // esi
  __int64 *v13; // rax
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rax
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_DWORD *)(a3 + 1788);
  v16 = -1;
  v5 = 0LL;
  v8 = SmpDirtyStoreCreate(a2, (v3 & 1) != 0 ? 2048 : 512, 1LL, &v16);
  if ( v8 < 0 )
    goto LABEL_11;
  v9 = SmAlloc(0x30uLL, 0x53506D73u);
  v5 = v9;
  if ( !v9 )
  {
    v8 = -1073741670;
LABEL_11:
    v10 = v16;
    goto LABEL_5;
  }
  memset(v9, 0, 0x30uLL);
  v5[1] = a3;
  v10 = v16;
  *((_WORD *)v5 + 8) = v16;
  if ( SmpKeyedStoreEntryGet(BugCheckParameter2, v5 + 1, 1, 0) )
  {
    v10 = -1;
    v5 = 0LL;
    v8 = 0;
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_5:
  if ( v10 != -1 )
  {
    v12 = v10 & 0x3FF;
    v13 = (__int64 *)SmKmStoreRefFromStoreIndex(a2, v12);
    SmKmStoreDeleteWhenEmpty(v14, *v13, 1LL);
    v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, v12);
    ExReleaseRundownProtection_0(v15 + 1);
  }
  if ( v5 )
    CmSiFreeMemory((PPRIVILEGE_SET)v5);
  return (unsigned int)v8;
}
