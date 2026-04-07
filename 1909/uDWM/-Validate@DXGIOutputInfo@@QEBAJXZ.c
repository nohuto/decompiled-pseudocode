/*
 * XREFs of ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x18002C358
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18002BBC4 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DXGIOutputInfo::Validate(DXGIOutputInfo *this)
{
  unsigned int v1; // ebx
  _WORD *v2; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // r9d
  signed int v7; // ecx
  unsigned __int64 v8; // rdx
  unsigned int v10; // [rsp+20h] [rbp-18h]
  void *v11; // [rsp+28h] [rbp-10h]

  v1 = 0;
  v2 = (_WORD *)((char *)this + 204);
  v4 = 0LL;
  if ( this == (DXGIOutputInfo *)-204LL )
  {
    v6 = -2147024809;
    v7 = -2147024809;
  }
  else
  {
    v5 = 32LL;
    do
    {
      if ( !*v2 )
        break;
      ++v2;
      --v5;
    }
    while ( v5 );
    v6 = -2147024809;
    v7 = v5 == 0 ? 0x80070057 : 0;
    if ( v5 )
      v4 = 32 - v5;
    else
      v4 = 0LL;
  }
  if ( v7 < 0 )
    v8 = 0LL;
  else
    v8 = 2 * v4;
  if ( v7 < 0 )
  {
    v10 = 60;
LABEL_20:
    v1 = v6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v10, v11);
    return v1;
  }
  if ( v8 < 2 )
  {
    v10 = 65;
    goto LABEL_20;
  }
  if ( (*((_BYTE *)this + 200) & 8) != 0 && !*((_QWORD *)this + 13) )
  {
    v6 = -2003304442;
    v10 = 74;
    goto LABEL_20;
  }
  return v1;
}
