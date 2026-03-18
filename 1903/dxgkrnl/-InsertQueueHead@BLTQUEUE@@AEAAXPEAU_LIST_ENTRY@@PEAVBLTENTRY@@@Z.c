/*
 * XREFs of ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C027BC44
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01421C4 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027C720 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     McTemplateK0dt @ 0x1C0047434 (McTemplateK0dt.c)
 */

void __fastcall BLTQUEUE::InsertQueueHead(BLTQUEUE *this, struct _LIST_ENTRY *a2, struct BLTENTRY *a3)
{
  __int64 v6; // rcx
  const GUID *v7; // r8
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v9; // rax
  __int64 v10; // [rsp+20h] [rbp-18h]

  KeWaitForSingleObject((char *)this + 8, Executive, 0, 0, 0LL);
  if ( a2 == (struct _LIST_ENTRY *)((char *)this + 64) && a3 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v10) = 1;
    McTemplateK0dt(v6, &EventBltQueueAddEntry, v7, *((_DWORD *)a3 + 15), v10);
  }
  Flink = a2->Flink;
  v9 = (struct _LIST_ENTRY *)((char *)a3 + 8);
  if ( a2->Flink->Blink != a2 )
    __fastfail(3u);
  v9->Flink = Flink;
  *((_QWORD *)a3 + 2) = a2;
  Flink->Blink = v9;
  a2->Flink = v9;
  KeReleaseMutex((PRKMUTEX)((char *)this + 8), 0);
}
