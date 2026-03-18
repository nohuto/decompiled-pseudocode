/*
 * XREFs of ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x1800D8DE0
 * Callers:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18009A96C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x1800CFC64 (-AssignEntry@HANDLE_TABLE@@QEAAJIK@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x1800D8E44 (-Resize@HANDLE_TABLE@@AEAAJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::ResizeToFit(HANDLE_TABLE *this, unsigned int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( a2 >= 0x4000000 )
  {
    v5 = -2003303411;
    v9 = 141;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v5, v9);
    return v5;
  }
  v3 = a2 + 1024;
  v4 = -1;
  if ( v3 >= a2 )
    v4 = v3;
  v5 = v3 < a2 ? 0x80070216 : 0;
  if ( v3 < a2 )
  {
    v9 = 157;
    goto LABEL_13;
  }
  if ( v4 >= 0x4000000 )
    v4 = 0x4000000;
  if ( v4 > *((_DWORD *)this + 3) )
  {
    v6 = HANDLE_TABLE::Resize(this, v4);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xB1u);
  }
  return v5;
}
