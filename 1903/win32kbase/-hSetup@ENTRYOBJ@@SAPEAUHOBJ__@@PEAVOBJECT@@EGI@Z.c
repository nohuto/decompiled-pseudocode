/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C00287BC
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C0022950 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 *     HmgAlloc @ 0x1C0027540 (HmgAlloc.c)
 *     GreCreateRectRgnIndirect @ 0x1C00276E0 (GreCreateRectRgnIndirect.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C001EC70 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(struct OBJECT *a1, char a2, unsigned __int16 a3, unsigned int a4)
{
  GdiHandleManager *v4; // rbx
  unsigned int v9; // eax
  struct _ENTRY *Entry; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdi
  int v13; // ecx
  int v14; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int16 v16; // ax
  unsigned __int64 v17; // rdi
  GdiHandleManager *v18; // rbx
  unsigned int v19; // eax
  GdiHandleEntryDirectory *v20; // rcx
  signed __int32 v22[22]; // [rsp+0h] [rbp-58h] BYREF
  struct GdiHandleEntryTable *v23; // [rsp+60h] [rbp+8h] BYREF
  __int16 v24; // [rsp+68h] [rbp+10h]
  unsigned int v25; // [rsp+70h] [rbp+18h] BYREF

  v4 = gpHandleManager;
  v9 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, a4);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v4 + 2), v9, 1);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread || (a3 & 0x10) != 0 )
    v12 = 0LL;
  else
    v12 = *(_QWORD *)(ThreadWin32Thread + 72);
  v13 = *((_DWORD *)Entry + 2);
  *((_QWORD *)Entry + 2) = 0LL;
  v14 = v13 & 1;
  *((_BYTE *)Entry + 14) = a2;
  *((_BYTE *)Entry + 15) = 0;
  if ( (a3 & 8) == 0 )
  {
    if ( v12 )
      v14 |= *(_DWORD *)(v12 + 8) & 0xFFFFFFFE;
    else
      v14 |= (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (a3 & 1) != 0 )
  {
    if ( v12 )
      CurrentThread = *(struct _KTHREAD **)v12;
    else
      CurrentThread = KeGetCurrentThread();
    *((_QWORD *)a1 + 2) = CurrentThread;
  }
  *((_WORD *)a1 + 6) = a3 & 1;
  LOBYTE(v24) = a2;
  *((_DWORD *)a1 + 2) = (a3 >> 1) & 1;
  *((_QWORD *)Entry + 2) = 0LL;
  HIBYTE(v24) = BYTE2(a4);
  v16 = v24;
  *((_DWORD *)Entry + 2) = v14;
  *((_WORD *)Entry + 6) = v16;
  if ( (a3 & 0x40) != 0 )
    *((_WORD *)Entry + 6) = v16 | 0x80;
  if ( (a3 & 0x80) != 0 )
    *((_BYTE *)Entry + 15) |= 1u;
  *(_QWORD *)Entry = a4 | 0xFFFFFFFFFF000000uLL;
  v17 = (unsigned __int16)a4 | (unsigned __int64)(*((unsigned __int16 *)Entry + 6) << 16);
  *(_QWORD *)a1 = v17;
  _InterlockedOr(v22, 0);
  v18 = gpHandleManager;
  v19 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, a4);
  v20 = (GdiHandleEntryDirectory *)*((_QWORD *)v18 + 2);
  v23 = 0LL;
  v25 = 0;
  if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v20, v19, &v23, &v25) && v25 < *((_DWORD *)v23 + 5) )
    *(_QWORD *)(*(_QWORD *)(**((_QWORD **)v23 + 3) + 8 * ((unsigned __int64)v25 >> 8)) + 16LL * (unsigned __int8)v25 + 8) = a1;
  return (struct HOBJ__ *)v17;
}
