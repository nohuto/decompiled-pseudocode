/*
 * XREFs of ?RecordIndependentFlipInfo@CGlobalCompositionSurfaceInfo@@UEAAJ_KI_N1IIPEA_N@Z @ 0x18025C200
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxqqqqq @ 0x18025C7AC (McTemplateU0xxqqqqq.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::RecordIndependentFlipInfo(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned int a6,
        char a7,
        bool *a8)
{
  char v8; // r15
  char v9; // r13
  unsigned int v11; // ebx
  char v13; // si
  int v14; // eax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v18; // [rsp+98h] [rbp+10h] BYREF
  int v19; // [rsp+A0h] [rbp+18h] BYREF
  int v20; // [rsp+A8h] [rbp+20h] BYREF

  v19 = a3;
  v18 = a2;
  v8 = a5;
  v9 = a6;
  v11 = 0;
  v20 = 0;
  v13 = 1;
  v14 = NtSetCompositionSurfaceIndependentFlipInfo(
          *((_QWORD *)this + 4),
          &v18,
          a4,
          (unsigned __int8)a5,
          a6,
          1 << a7,
          &v19,
          &v20);
  if ( v14 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxqqqqq(v16, v15, *((_DWORD *)this + 10), v18, v19, a4, v8, v9, v20);
    if ( *((_QWORD *)this + 12) == v18 )
    {
      if ( !a4 || a5 )
        v13 = 0;
      *((_BYTE *)this + 108) = v13;
    }
    if ( a8 )
      *a8 = v20 != 0;
  }
  else
  {
    v11 = v14 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v14 | 0x10000000, 0xDDu, 0LL);
  }
  return v11;
}
