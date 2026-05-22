/*
 * XREFs of ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x180131B3C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180036FB0 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18007F2AC (-SendHomeGesture@MPCManager@@QEAAXKK_KI@Z.c)
 */

void __fastcall MPCSixDofProcessor::SendHomeEvent(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  DWORD v4; // [rsp+60h] [rbp+18h] BYREF

  if ( !byte_1801E18D8 )
  {
    v4 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\DWM",
      L"DisableBloomFor6dof",
      0x10u,
      0LL,
      &dword_1801E18DC,
      &v4);
    byte_1801E18D8 = 1;
  }
  if ( dword_1801E18DC != 1 )
    MPCManager::SendHomeGesture(
      MPCManager::s_instance,
      **((_DWORD **)this + 6),
      *(_DWORD *)(*((_QWORD *)this + 6) + 4LL),
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 179));
}
