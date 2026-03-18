/*
 * XREFs of _EnableIAMThreadAccess @ 0x1C0089770
 * Callers:
 *     NtUserEnableIAMAccess @ 0x1C0089690 (NtUserEnableIAMAccess.c)
 * Callees:
 *     ?FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z @ 0x1C008AB1C (-FindIAMThread@@YAPEAUtagIAM_THREAD@@QEBUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall EnableIAMThreadAccess(__int64 a1)
{
  unsigned int v2; // ebx
  struct tagIAM_THREAD *IAMThread; // rax
  struct _LIST_ENTRY *v4; // rcx
  int v5; // r8d
  struct _LIST_ENTRY *v6; // rax
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax

  v2 = 0;
  IAMThread = FindIAMThread((const struct tagTHREADINFO *const)a1);
  v4 = (struct _LIST_ENTRY *)IAMThread;
  if ( v5 )
  {
    if ( !IAMThread )
    {
      v4 = (struct _LIST_ENTRY *)Win32AllocPoolZInit(32LL, 1869443925LL);
      if ( !v4 )
        return v2;
      Flink = gIAMThreadList.Flink;
      if ( gIAMThreadList.Flink->Blink != &gIAMThreadList )
        goto FatalListEntryError_4;
      v4->Flink = gIAMThreadList.Flink;
      v4->Blink = &gIAMThreadList;
      Flink->Blink = v4;
      gIAMThreadList.Flink = v4;
      v4[1].Flink = (struct _LIST_ENTRY *)a1;
    }
    v4[1].Blink = *(struct _LIST_ENTRY **)(a1 + 448);
    return 1;
  }
  if ( IAMThread )
  {
    v6 = *(struct _LIST_ENTRY **)IAMThread;
    if ( v6->Blink == v4 )
    {
      Blink = v4->Blink;
      if ( Blink->Flink == v4 )
      {
        Blink->Flink = v6;
        v6->Blink = Blink;
        Win32FreePool(v4);
        return 1;
      }
    }
FatalListEntryError_4:
    __fastfail(3u);
  }
  return v2;
}
