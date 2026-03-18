/*
 * XREFs of ParseNameTail @ 0x1C001D130
 * Callers:
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     ParseSuperName @ 0x1C00195D0 (ParseSuperName.c)
 *     ParseName @ 0x1C001D054 (ParseName.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 */

__int64 __fastcall ParseNameTail(__int64 a1, char **a2, __int64 a3)
{
  __int64 v6; // r9
  char *v7; // rax
  char v8; // cl
  int v9; // r11d
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r8
  char v14; // al
  int v16; // r10d
  _BYTE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // r9
  char v21; // al
  char *v22; // rax

  v6 = -1LL;
  do
    ++v6;
  while ( *(_BYTE *)(a3 + v6) );
  v7 = *a2;
  v8 = **a2;
  if ( v8 )
  {
    if ( v8 != 47 )
    {
      if ( v8 == 46 )
      {
        v9 = 2;
        *a2 = v7 + 1;
      }
      else
      {
        v9 = 1;
      }
      while ( 1 )
      {
LABEL_7:
        if ( (unsigned __int64)(unsigned int)v6 + 4 >= 0x100 )
        {
          LogError(3221225734LL);
          AcpiDiagTraceAmlError(a1, 3221225734LL);
          PrintDebugMessage(130, a3, 0, 0, 0LL);
          return 3221225734LL;
        }
        v10 = (_BYTE *)(a3 + (unsigned int)v6);
        v11 = (unsigned int)(256 - v6);
        if ( (unsigned __int64)(v11 - 1) > 0x7FFFFFFE )
        {
          if ( 256 == (_DWORD)v6 )
            goto LABEL_16;
        }
        else
        {
          v12 = 4 - v11;
          v13 = *a2 - v10;
          while ( v12 + v11 )
          {
            v14 = v10[v13];
            if ( !v14 )
              break;
            *v10++ = v14;
            if ( !--v11 )
              goto LABEL_32;
          }
          if ( v11 )
            goto LABEL_15;
LABEL_32:
          --v10;
        }
LABEL_15:
        *v10 = 0;
LABEL_16:
        *a2 += 4;
        LODWORD(v6) = v6 + 4;
        if ( !--v9 )
          return 0LL;
        v16 = v6 + 1;
        if ( (unsigned int)(v6 + 1) < 0x100 )
        {
          v17 = (_BYTE *)(a3 + (unsigned int)v6);
          v18 = (unsigned int)(256 - v6);
          if ( (unsigned __int64)(v18 - 1) <= 0x7FFFFFFE )
          {
            v19 = 2147483646 - v18;
            v20 = (const char *)("." - v17);
            while ( v19 + v18 )
            {
              v21 = v17[(_QWORD)v20];
              if ( !v21 )
                break;
              *v17++ = v21;
              if ( !--v18 )
                goto LABEL_24;
            }
            if ( !v18 )
LABEL_24:
              --v17;
LABEL_26:
            *v17 = 0;
            goto LABEL_27;
          }
          if ( 256 != (_DWORD)v6 )
            goto LABEL_26;
LABEL_27:
          LODWORD(v6) = v16;
        }
      }
    }
    v22 = v7 + 1;
    *a2 = v22;
    v9 = (unsigned __int8)*v22;
    *a2 = v22 + 1;
    if ( v9 )
      goto LABEL_7;
    return 0LL;
  }
  else
  {
    *a2 = v7 + 1;
    return 0LL;
  }
}
