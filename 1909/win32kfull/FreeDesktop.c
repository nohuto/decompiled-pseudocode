/*
 * XREFs of FreeDesktop @ 0x1C0117580
 * Callers:
 *     <none>
 * Callees:
 *     CleanupIAMAccess @ 0x1C000B900 (CleanupIAMAccess.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0021E34 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C0021EB8 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C015FE60 (_SetMagnificationInputTransform.c)
 */

__int64 __fastcall FreeDesktop(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  struct _KPROCESS *v3; // rax
  struct _KPROCESS *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v13);
  if ( *(_QWORD *)(v1 + 216) )
  {
    v9 = 0LL;
    v11 = 0LL;
    v10 = 0LL;
    v12 = 3;
    SetMagnificationInputTransform(&v9);
  }
  CleanupIAMAccess((struct tagDESKTOP *)v1);
  *(_DWORD *)(v1 + 48) |= 4u;
  FreeView(gpepCSRSS, (struct tagDESKTOP *)v1);
  v3 = (struct _KPROCESS *)ReferenceDwmProcess();
  v4 = v3;
  if ( v3 )
  {
    FreeView(v3, (struct tagDESKTOP *)v1);
    DereferenceDwmProcess(v4);
  }
  v5 = *(void **)(v1 + 128);
  if ( v5 )
  {
    RtlDestroyHeap(*(PVOID *)(v1 + 128));
    v2 = MmUnmapViewInSessionSpace(v5);
    ObfDereferenceObject(*(PVOID *)(v1 + 120));
  }
  v6 = *(_QWORD *)(v1 + 8);
  if ( v6 )
    Win32FreePool(v6);
  UnlockObjectAssignment(v1 + 40);
  if ( !v13 )
    UserSessionSwitchLeaveCrit(v7);
  return v2;
}
