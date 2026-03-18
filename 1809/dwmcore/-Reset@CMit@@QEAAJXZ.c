/*
 * XREFs of ?Reset@CMit@@QEAAJXZ @ 0x180062A10
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180062944 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMit::Reset(HANDLE *this)
{
  unsigned int v1; // ebx
  HANDLE v3; // rax
  unsigned int v4; // ecx
  unsigned int v6; // ecx
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !this[1] )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v1 = -2147467260;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_18029BB80, 1u, -2147467260, 0x94u);
    }
    else
    {
      v3 = CreateThread(0LL, 0LL, CMit::RunInputThreadStatic, this, 4u, &ThreadId);
      this[1] = v3;
      if ( v3 )
      {
        SetThreadPriority(v3, 16);
        ResumeThread(this[1]);
        goto LABEL_5;
      }
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_18029BB80, 1u, -2147024882, 0xA4u);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v1, 0xBAu);
    return v1;
  }
LABEL_5:
  if ( !*((_BYTE *)this + 24) )
    SetEvent(this[2]);
  return v1;
}
