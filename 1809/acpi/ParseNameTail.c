/*
 * XREFs of ParseNameTail @ 0x1C0021070
 * Callers:
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0008DE0 (ParseSuperName.c)
 *     ParseName @ 0x1C0020F94 (ParseName.c)
 * Callees:
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseNameTail(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v4; // rdi
  __int64 v6; // r9
  char *v7; // rax
  char v8; // cl
  int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // r10
  char v12; // al
  unsigned int v14; // r10d
  _BYTE *v15; // rcx
  const char *v16; // r9
  char v17; // al
  unsigned __int8 *v18; // rax

  v3 = a3;
  v4 = (__int64 *)a2;
  v6 = -1LL;
  do
    ++v6;
  while ( *(_BYTE *)(a3 + v6) );
  v7 = *(char **)a2;
  v8 = **(_BYTE **)a2;
  if ( v8 )
  {
    if ( v8 != 47 )
    {
      if ( v8 == 46 )
      {
        v9 = 2;
        *(_QWORD *)a2 = v7 + 1;
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
          LogError(3221225734LL, a2, a3, v6);
          AcpiDiagTraceAmlError(a1, 3221225734LL);
          PrintDebugMessage(130, v3, 0, 0, 0LL);
          return 3221225734LL;
        }
        a3 = *v4;
        v10 = v3 + (unsigned int)v6;
        a2 = (unsigned int)(256 - v6);
        if ( a2 - 1 > 0x7FFFFFFE )
        {
          if ( 256 == (_DWORD)v6 )
            goto LABEL_16;
        }
        else
        {
          v11 = 4 - a2;
          a3 -= v10;
          while ( v11 + a2 )
          {
            v12 = *(_BYTE *)(a3 + v10);
            if ( !v12 )
              break;
            *(_BYTE *)v10++ = v12;
            if ( !--a2 )
              goto LABEL_32;
          }
          if ( a2 )
            goto LABEL_15;
LABEL_32:
          --v10;
        }
LABEL_15:
        *(_BYTE *)v10 = 0;
LABEL_16:
        *v4 += 4LL;
        v6 = (unsigned int)(v6 + 4);
        if ( !--v9 )
          return 0LL;
        v14 = v6 + 1;
        if ( (unsigned int)(v6 + 1) < 0x100 )
        {
          v15 = (_BYTE *)(v3 + (unsigned int)v6);
          a2 = (unsigned int)(256 - v6);
          if ( a2 - 1 <= 0x7FFFFFFE )
          {
            a3 = 2147483646 - a2;
            v16 = (const char *)("." - v15);
            while ( a3 + a2 )
            {
              v17 = v15[(_QWORD)v16];
              if ( !v17 )
                break;
              *v15++ = v17;
              if ( !--a2 )
                goto LABEL_24;
            }
            if ( !a2 )
LABEL_24:
              --v15;
LABEL_26:
            *v15 = 0;
            goto LABEL_27;
          }
          if ( 256 != (_DWORD)v6 )
            goto LABEL_26;
LABEL_27:
          v6 = v14;
        }
      }
    }
    v18 = (unsigned __int8 *)(v7 + 1);
    *(_QWORD *)a2 = v18;
    v9 = *v18;
    *(_QWORD *)a2 = v18 + 1;
    if ( v9 )
      goto LABEL_7;
    return 0LL;
  }
  else
  {
    *(_QWORD *)a2 = v7 + 1;
    return 0LL;
  }
}
