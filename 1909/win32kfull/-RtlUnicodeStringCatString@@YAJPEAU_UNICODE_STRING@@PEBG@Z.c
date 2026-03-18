/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C005B54C
 * Callers:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C005B28C (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C005B40C (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0108D04 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0108E68 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ReadTiltCalibrationData @ 0x1C01D289C (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01D2EA0 (WriteTiltCalibrationData.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01F8BA4 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2)
{
  USHORT Length; // dx
  PWSTR Buffer; // rdi
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  int v8; // r8d
  USHORT MaximumLength; // ax
  __int64 v10; // rdx
  __int16 v11; // cx
  unsigned __int64 v12; // r9
  char *v13; // rdi

  Length = a1->Length;
  Buffer = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( (a1->Length & 1) != 0 )
    return (unsigned int)-1073741811;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( !a1->Buffer && (Length || MaximumLength) )
    {
      v8 = -1073741811;
    }
    else
    {
      Buffer = a1->Buffer;
      v6 = (unsigned __int64)MaximumLength >> 1;
      v7 = (unsigned __int64)Length >> 1;
    }
    if ( v8 >= 0 )
    {
      v10 = 0x7FFFLL;
      v8 = 0;
      v11 = 0;
      v12 = v6 - v7;
      if ( !v12 )
        goto LABEL_26;
      v13 = (char *)Buffer + 2 * v7 - (_QWORD)a2;
      do
      {
        if ( !v10 )
          break;
        if ( !*a2 )
          break;
        *(const unsigned __int16 *)((char *)a2 + (_QWORD)v13) = *a2;
        --v10;
        ++a2;
        ++v11;
        --v12;
      }
      while ( v12 );
      if ( !v12 && v10 )
      {
LABEL_26:
        if ( *a2 )
          v8 = -2147483643;
      }
      a1->Length = 2 * (v7 + v11);
    }
  }
  return (unsigned int)v8;
}
