/*
 * XREFs of ?PostPresent@CGlobalSurfaceManager@@UEAAJXZ @ 0x1800BC500
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x18015B680 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall CGlobalSurfaceManager::PostPresent(CGlobalSurfaceManager *this)
{
  __int64 i; // rdi
  int v3; // edi
  __int64 j; // rbp
  __int64 v6; // r14
  signed int v7; // eax
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rcx
  HANDLE hEvent; // [rsp+50h] [rbp+8h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 76); i = (unsigned int)(i + 1) )
  {
    v10 = *((_QWORD *)this + 35);
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(*(_QWORD *)(v10 + 8 * i), &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *((_DWORD *)this + 76) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 280, 8u);
  v3 = 0;
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 68); j = (unsigned int)(j + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 31) + 8 * j);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x17Bu, 0LL);
    if ( !v3 || v3 >= 0 && v9 < 0 )
      v3 = v9;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  *((_DWORD *)this + 68) = 0;
  return (unsigned int)v3;
}
