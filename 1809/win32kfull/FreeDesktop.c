/*
 * XREFs of FreeDesktop @ 0x1C0132530
 * Callers:
 *     <none>
 * Callees:
 *     CleanupIAMAccess @ 0x1C00096A0 (CleanupIAMAccess.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C00B26DC (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     _SetMagnificationInputTransform @ 0x1C00C981C (_SetMagnificationInputTransform.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall FreeDesktop(__int64 *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // esi
  struct _KPROCESS *v3; // rax
  struct _KPROCESS *v4; // rdi
  void *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15[3]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  if ( *(_QWORD *)(v1 + 216) )
  {
    memset(v15, 0, 0x24uLL);
    LODWORD(v15[2]) = 3;
    SetMagnificationInputTransform(v15, v12, v13, v14);
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
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v2;
}
