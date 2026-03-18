/*
 * XREFs of ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x1801E30D4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x1801E4948 (-_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateSettings(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MANIPULATION_UPDATESETTINGS *a3)
{
  int v3; // eax
  const struct tagMILCMD_MANIPULATION_UPDATESETTINGS *v4; // rdi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int8 updated; // al
  __int64 v13; // rcx
  unsigned __int8 v14; // r11

  v3 = *((_DWORD *)a3 + 2);
  v4 = a3;
  if ( *((_DWORD *)this + 112) != v3 )
    *((_DWORD *)this + 112) = v3;
  v5 = *((_DWORD *)a3 + 4);
  if ( *((_DWORD *)this + 114) != v5 )
    *((_DWORD *)this + 114) = v5;
  v6 = *((_DWORD *)a3 + 5);
  if ( *((_DWORD *)this + 116) != v6 )
    *((_DWORD *)this + 116) = v6;
  v7 = *((_DWORD *)a3 + 6);
  if ( *((_DWORD *)this + 118) != v7 )
    *((_DWORD *)this + 118) = v7;
  LOBYTE(a3) = *((_BYTE *)a3 + 12) != 0;
  CManipulation::_UpdateInertiaEnabled(this, 0LL, a3);
  LOBYTE(v8) = *((_BYTE *)v4 + 13) != 0;
  CManipulation::_UpdateInertiaEnabled(v9, 1LL, v8);
  LOBYTE(v10) = *((_BYTE *)v4 + 14) != 0;
  updated = CManipulation::_UpdateInertiaEnabled(v11, 2LL, v10);
  if ( v14 | updated )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 64LL))(v13, 10LL, v13);
  return 0LL;
}
