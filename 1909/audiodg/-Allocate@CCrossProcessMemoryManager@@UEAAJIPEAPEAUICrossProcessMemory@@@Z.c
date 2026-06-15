/*
 * XREFs of ?Allocate@CCrossProcessMemoryManager@@UEAAJIPEAPEAUICrossProcessMemory@@@Z @ 0x140001940
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400018D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x140001D28 (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@$$QEAPEAXAEAI@Z @ 0x14000359C (--$MakeAndInitialize@VCCrossProcessServerMemory@@UICrossProcessMemory@@PEAXAEAI@Details@WRL@Micr.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140028114 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCrossProcessMemoryManager::Allocate(
        CCrossProcessMemoryManager *this,
        DWORD a2,
        struct ICrossProcessMemory **a3)
{
  char *v3; // rdi
  HANDLE FileMappingW; // rax
  const char *v6; // r9
  char *v7; // rbx
  int v8; // eax
  unsigned int LastError; // esi
  DWORD dwMaximumSizeLow; // [rsp+20h] [rbp-28h]
  DWORD dwMaximumSizeLowa; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v14; // [rsp+58h] [rbp+10h] BYREF
  char *v15; // [rsp+60h] [rbp+18h] BYREF
  char *v16; // [rsp+68h] [rbp+20h] BYREF

  v14 = a2;
  v3 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    v15 = 0LL;
    FileMappingW = CreateFileMappingW(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     (LPSECURITY_ATTRIBUTES)((char *)this + 16),
                     4u,
                     0,
                     a2,
                     0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)&v15,
      FileMappingW);
    v7 = v15;
    if ( ((unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v16 = v15;
      v15 = 0LL;
      v8 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessServerMemory,ICrossProcessMemory,void *,unsigned int &>(
             &v15,
             &v16,
             &v14);
      LastError = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39,
          (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
          (const char *)(unsigned int)v8,
          dwMaximumSizeLowa);
        v3 = v7;
      }
      else
      {
        v7 = 0LL;
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>(&v15, a3);
        LastError = 0;
      }
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v15);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x35,
                    (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
                    v6);
      v3 = v7;
    }
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v7);
    return LastError;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (unsigned int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      (const char *)0x80070057LL,
      dwMaximumSizeLow);
    return 2147942487LL;
  }
}
