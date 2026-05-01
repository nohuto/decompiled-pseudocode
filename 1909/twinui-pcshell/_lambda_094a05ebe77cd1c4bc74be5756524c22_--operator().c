/*
 * XREFs of _lambda_094a05ebe77cd1c4bc74be5756524c22_::operator() @ 0x180145DA0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_094a05ebe77cd1c4bc74be5756524c22___::Run @ 0x180146C40 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_094a05ebe77cd1c4bc74be5756524c22___--Run.c)
 * Callees:
 *     McTemplateU0q @ 0x180039F5C (McTemplateU0q.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0dddd @ 0x180147A80 (McTemplateU0dddd.c)
 */

// Hidden C++ exception states: #wind=1
_UNKNOWN **__fastcall lambda_094a05ebe77cd1c4bc74be5756524c22_::operator()(_DWORD *a1)
{
  _UNKNOWN **result; // rax
  unsigned int i; // ebp
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+28h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  result = &retaddr;
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    v9 = 0;
    result = (_UNKNOWN **)McTemplateU0dddd(
                            (_DWORD)a1,
                            (unsigned int)&ImmersiveShell_AppManager_ModeChange_Start,
                            a1[2],
                            0,
                            a1[3],
                            v9,
                            -2LL);
  }
  for ( i = 0; i < a1[4]; ++i )
  {
    v11 = 0LL;
    v4 = *(_QWORD *)a1;
    v5 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(**(_QWORD **)a1 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( v5(v4, i, &GUID_8ec4fc3a_ddb1_4e84_a7fc_210ec0ffee84, &v11) >= 0 )
    {
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q(v6, (__int64)&ImmersiveShell_AppManager_ModeChanged_Start, i);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, (unsigned int)a1[3]);
      if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
        McTemplateU0q(v7, (__int64)&ImmersiveShell_AppManager_ModeChanged_Stop, i);
    }
    result = (_UNKNOWN **)Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
  {
    LODWORD(v8) = 0;
    return (_UNKNOWN **)McTemplateU0dddd(
                          (_DWORD)a1,
                          (unsigned int)&ImmersiveShell_AppManager_ModeChange_Stop,
                          a1[2],
                          0,
                          a1[3],
                          v8);
  }
  return result;
}
