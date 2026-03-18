/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z @ 0x1800BDE40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(
        CHwDisplayRenderTarget *this,
        unsigned int a2,
        char a3)
{
  __int64 v3; // rax
  char *v5; // rcx
  signed int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  signed int v12; // eax
  __int64 v13; // rcx

  v3 = *((_QWORD *)this + 1);
  v5 = (char *)this - 144;
  if ( v3 )
  {
    v8 = *(_DWORD *)(v3 + 880);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, &dword_1802BE2C0, 2u, v8, 0x302u, 0LL);
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v5 + 32LL))(v5) )
    {
      v8 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802BE2C0, 2u, 0x88980006, 0x30Cu, 0LL);
      v11 = -2003304442;
      goto LABEL_10;
    }
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v5, &dword_1802BE2C0, 2u, 0x8898008D, 0x306u, 0LL);
  }
  v11 = v8;
  if ( v8 < 0 )
  {
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_180280CA0, 1u, v8, 0x26Bu, 0LL);
    return v11;
  }
  LOBYTE(v10) = a3;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 56LL))(
          *((_QWORD *)this + 4),
          a2,
          v10);
  v11 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180280CA0, 1u, v12, 0x26Eu, 0LL);
  return v11;
}
