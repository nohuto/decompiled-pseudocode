/*
 * XREFs of ??$?0V?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@RefAndObject@?$shared_object@V?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA@$$QEAV?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@3@@Z @ 0x1800A54E4
 * Callers:
 *     ??4?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x1800A4828 (--4-$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0EAAAAAAAAAAA@$04$0A@U_T.c)
 * Callees:
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 */

__int64 __fastcall wil::details::shared_object<wil::ActivityBase<CreativeFramework::Logging::ShellPlacementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CreativeFramework::Logging::ShellPlacementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::RefAndObject(
        __int64 a1,
        __int64 a2)
{
  bool v4; // zf
  HANDLE ProcessHeap; // rax

  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 4);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 24);
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 4) = 0;
  memset_0((void *)(a1 + 48), 0, 0x20uLL);
  v4 = *(_BYTE *)(a1 + 72) == 0;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 48);
  if ( !v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 64));
    *(_BYTE *)(a1 + 72) = 0;
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 64);
  *(_BYTE *)(a2 + 64) = 0;
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 76);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 184) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 200) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(a1 + 216) = *(_OWORD *)(a2 + 208);
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 224);
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 232);
  *(_QWORD *)(a2 + 224) = 0LL;
  *(_QWORD *)(a2 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  return a1;
}
