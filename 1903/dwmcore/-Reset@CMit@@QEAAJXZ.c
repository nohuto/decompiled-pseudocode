/*
 * XREFs of ?Reset@CMit@@QEAAJXZ @ 0x1800E0050
 * Callers:
 *     ?Initialize@CGlobalInputManager@@IEAAJXZ @ 0x1800DFF78 (-Initialize@CGlobalInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMit::Reset(HANDLE *this)
{
  HANDLE v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rcx
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  if ( !this[1] )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v4 = -2147467260;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802C1B68, 1u, 0x80004004, 0x92u, 0LL);
    }
    else
    {
      v2 = CreateThread(0LL, 0LL, CMit::RunInputThreadStatic, this, 4u, &ThreadId);
      this[1] = v2;
      if ( v2 )
      {
        SetThreadDescription(v2, L"DWM Master Input Thread");
        SetThreadPriority(this[1], 16);
        ResumeThread(this[1]);
        goto LABEL_5;
      }
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802C1B68, 1u, 0x8007000E, 0xA4u, 0LL);
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v4, 0xBBu, 0LL);
    return v4;
  }
LABEL_5:
  v4 = 0;
  if ( !*((_BYTE *)this + 24) )
    SetEvent(this[2]);
  return v4;
}
