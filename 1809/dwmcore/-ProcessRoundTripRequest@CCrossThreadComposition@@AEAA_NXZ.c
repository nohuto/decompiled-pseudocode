/*
 * XREFs of ?ProcessRoundTripRequest@CCrossThreadComposition@@AEAA_NXZ @ 0x180057F0C
 * Callers:
 *     ?PostRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180057C80 (-PostRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18009DAB4 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0qqx @ 0x18014C110 (McTemplateU0qqx.c)
 */

char __fastcall CCrossThreadComposition::ProcessRoundTripRequest(CCrossThreadComposition *this, unsigned int a2)
{
  char v2; // r15
  unsigned int i; // r14d
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r9
  unsigned int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[20]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+44h] [rbp-Ch]

  v2 = 0;
  for ( i = 0; i < *((_DWORD *)this + 118); ++i )
  {
    v6 = *((_QWORD *)this + 56);
    v7 = 2LL * i;
    LODWORD(v8) = *(_DWORD *)(v6 + 16LL * i + 4);
    if ( (_DWORD)v8 )
    {
      LODWORD(v8) = v8 - 1;
      if ( (_DWORD)v8 )
      {
        if ( (_DWORD)v8 == 1 )
        {
          v9 = *((_QWORD *)this + 45);
          if ( !v9
            || (v10 = *(_QWORD **)(v9 + 8), v8 = *(_QWORD *)(v6 + 16LL * i + 8), v10[11] >= v8)
            || v10[7] > v8 && *(_QWORD *)((char *)v10 + 76) < v8 )
          {
            *(_DWORD *)v17 = 8;
            *(_OWORD *)&v17[4] = 0uLL;
            v18 = 0LL;
            *(_DWORD *)&v17[8] = *(_DWORD *)(v6 + 16LL * i);
            CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)v17);
            *(_DWORD *)(v6 + 16LL * i + 4) = 0;
            *(_QWORD *)(v6 + 16LL * i + 8) = 0LL;
            LODWORD(v8) = *((_DWORD *)this + 118);
            *(_OWORD *)v17 = *(_OWORD *)(v6 + 16LL * i);
            if ( i >= (unsigned int)v8 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x19Cu);
            }
            else
            {
              v11 = *((_QWORD *)this + 56);
              v12 = i;
              if ( i < (int)v8 - 1 )
              {
                do
                {
                  a2 = v12 + 1;
                  v16 = 2LL * v12;
                  v8 = 2LL * (v12 + 1);
                  v12 = a2;
                  *(_OWORD *)(v11 + 8 * v16) = *(_OWORD *)(v11 + 8 * v8);
                  LODWORD(v8) = *((_DWORD *)this + 118);
                }
                while ( a2 < (int)v8 - 1 );
              }
              *((_DWORD *)this + 118) = v8 - 1;
            }
            if ( i )
              --i;
            goto LABEL_18;
          }
        }
      }
      else
      {
        *(_DWORD *)(v6 + 16LL * i + 4) = 2;
        v13 = *((_QWORD *)this + 45);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( *((_DWORD *)this + 88) == 1 )
            v15 = *(_QWORD *)(v14 + 88);
          else
            v15 = *(_QWORD *)(v14 + 76);
          *(_QWORD *)(v6 + 16LL * i + 8) = v15 + 1;
        }
      }
    }
    *(_OWORD *)v17 = *(_OWORD *)(v6 + 16LL * i);
LABEL_18:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0qqx(v8, a2, *(_DWORD *)&v17[4], *(_DWORD *)v17, v17[8]);
    v2 |= *(_DWORD *)(v6 + 8 * v7 + 4) == 2;
  }
  return v2;
}
