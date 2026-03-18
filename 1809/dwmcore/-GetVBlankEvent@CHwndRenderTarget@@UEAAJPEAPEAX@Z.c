/*
 * XREFs of ?GetVBlankEvent@CHwndRenderTarget@@UEAAJPEAPEAX@Z @ 0x18005EB30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetVBlankEvent(CHwndRenderTarget *this, void **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx

  if ( !(*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 224LL))((char *)this - 64)
    && (v5 = *((_QWORD *)this + 13), *(_BYTE *)(v5 + 321))
    && *(_BYTE *)(v5 + 322)
    && (v4 = *((_QWORD *)this + 14)) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 352LL))(v4, a2);
    v8 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_18024C878, 1u, v6, 0x66Au);
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_18024C878, 1u, -2003304307, 0x66Eu);
  }
  return v8;
}
