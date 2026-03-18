/*
 * XREFs of ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01885E0
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018CC10 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 */

void __fastcall DeliverMouseInputToRIM(
        const struct _IVMouseInputPacket *a1,
        struct RawInputManagerObject *a2,
        struct RIMDEV *a3)
{
  char *v3; // rdi
  __int64 v7; // r9
  _WORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // rcx

  v3 = (char *)a2 + 568;
  RIMLockExclusive((__int64)a2 + 568);
  v7 = *((unsigned int *)a1 + 8);
  *((_DWORD *)a3 + 224) = v7;
  if ( (_DWORD)v7 )
  {
    v8 = (_WORD *)((char *)a3 + 480);
    v9 = (unsigned int)v7;
    do
    {
      v10 = *((_QWORD *)a1 + 3);
      *(v8 - 2) = *(_WORD *)v10;
      *(v8 - 1) = *(_WORD *)(v10 + 4);
      *v8 = *(_WORD *)(v10 + 8);
      v8 += 12;
      *(v8 - 11) = *(_WORD *)(v10 + 12);
      *((_DWORD *)v8 - 5) = *(_DWORD *)(v10 + 16);
      *((_DWORD *)v8 - 4) = *(_DWORD *)(v10 + 20);
      *((_DWORD *)v8 - 3) = *(_DWORD *)(v10 + 24);
      *((_DWORD *)v8 - 2) = *(_DWORD *)(v10 + 28);
      --v9;
    }
    while ( v9 );
  }
  *((_DWORD *)a3 + 64) = 0;
  *((_QWORD *)a3 + 33) = 24 * v7;
  rimProcessDeviceBufferAndStartRead(a2, a3, 1);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
