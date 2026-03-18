/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z @ 0x18005FDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::SetSyncRefreshCountWaitTarget(
        CHwDisplayRenderTarget *this,
        unsigned int a2,
        char a3)
{
  __int64 v3; // rax
  char *v5; // rcx
  int v8; // ebx
  unsigned int v9; // ecx
  __int64 v10; // r8
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // ecx

  v3 = *((_QWORD *)this + 1);
  v5 = (char *)this - 208;
  if ( v3 )
  {
    v8 = *(_DWORD *)(v3 + 848);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, &dword_1802925D8, 2u, v8, 0x302u);
    }
    else if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v5 + 32LL))(v5) )
    {
      v8 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802925D8, 2u, -2003304442, 0x30Cu);
      v11 = -2003304442;
      goto LABEL_10;
    }
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, &dword_1802925D8, 2u, -2003304307, 0x306u);
  }
  v11 = v8;
  if ( v8 < 0 )
  {
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_18024C878, 1u, v8, 0x26Bu);
    return v11;
  }
  LOBYTE(v10) = a3;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 4) + 56LL))(
          *((_QWORD *)this + 4),
          a2,
          v10);
  v11 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_18024C878, 1u, v12, 0x26Eu);
  return v11;
}
