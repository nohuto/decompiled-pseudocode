/*
 * XREFs of ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C01422F8
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01421C4 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027C720 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     McTemplateK0dt @ 0x1C0047434 (McTemplateK0dt.c)
 */

struct _LIST_ENTRY **__fastcall BLTQUEUE::RemoveQueueHead(BLTQUEUE *this, struct _LIST_ENTRY *a2)
{
  __int64 v4; // rcx
  const GUID *v5; // r8
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-18h]

  KeWaitForSingleObject((char *)this + 8, Executive, 0, 0, 0LL);
  Flink = a2->Flink;
  if ( a2->Flink == a2 )
  {
    p_Blink = 0LL;
  }
  else
  {
    if ( Flink->Blink != a2 || (v9 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    a2->Flink = v9;
    p_Blink = &Flink[-1].Blink;
    v9->Blink = a2;
  }
  if ( a2 == (struct _LIST_ENTRY *)((char *)this + 64) && p_Blink && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v10) = 1;
    McTemplateK0dt(v4, &EventBltQueueRemoveEntry, v5, *((_DWORD *)p_Blink + 15), v10);
  }
  KeReleaseMutex((PRKMUTEX)((char *)this + 8), 0);
  return p_Blink;
}
