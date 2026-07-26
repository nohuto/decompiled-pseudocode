/*
 * XREFs of ??0NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0011FD4
 * Callers:
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C00FC168 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0113F9C (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     memset @ 0x1C00416C0 (memset.c)
 */

NdisNetworkInterfacePersistedState *__fastcall NdisNetworkInterfacePersistedState::NdisNetworkInterfacePersistedState(
        NdisNetworkInterfacePersistedState *this)
{
  NdisNetworkInterfacePersistedState *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_WORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((_DWORD *)this + 15) = 0;
  memset((char *)this + 64, 0, 0x44uLL);
  result = this;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  return result;
}
