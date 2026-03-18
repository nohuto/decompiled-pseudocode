/*
 * XREFs of ?SetD2DEffectProperties@CTableTransferEffect@@MEAAJPEAUID2D1Effect@@@Z @ 0x1801B4B90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTableTransferEffect::SetD2DEffectProperties(CTableTransferEffect *this, struct ID2D1Effect *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx

  v4 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
         a2,
         0LL,
         0LL,
         *((_QWORD *)this + 25),
         4 * *((_DWORD *)this + 56));
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x3Au);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
           a2,
           2LL,
           0LL,
           *((_QWORD *)this + 30),
           4 * *((_DWORD *)this + 66));
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x40u);
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
             a2,
             4LL,
             0LL,
             *((_QWORD *)this + 35),
             4 * *((_DWORD *)this + 76));
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x46u);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 72LL))(
                a2,
                6LL,
                0LL,
                *((_QWORD *)this + 40),
                4 * *((_DWORD *)this + 86));
        v6 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x4Cu);
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                  a2,
                  1LL,
                  0LL,
                  (char *)this + 176,
                  4);
          v6 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x51u);
          }
          else
          {
            v15 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    3LL,
                    0LL,
                    (char *)this + 180,
                    4);
            v6 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x56u);
            }
            else
            {
              v17 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                      a2,
                      5LL,
                      0LL,
                      (char *)this + 184,
                      4);
              v6 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x5Bu);
              }
              else
              {
                v19 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                        a2,
                        7LL,
                        0LL,
                        (char *)this + 188,
                        4);
                v6 = v19;
                if ( v19 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x60u);
                }
                else
                {
                  v21 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, char *, int))(*(_QWORD *)a2 + 72LL))(
                          a2,
                          8LL,
                          0LL,
                          (char *)this + 192,
                          4);
                  v6 = v21;
                  if ( v21 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x65u);
                }
              }
            }
          }
        }
      }
    }
  }
  return v6;
}
