/*
 * XREFs of ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C0001064
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002F78 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C0041338 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 * Callees:
 *     ?CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z @ 0x1C0001114 (-CopyFromBuffer@DXGDIAGNOSTICS@@AEBAXIIQEAE@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnosticsInternal(
        DXGDIAGNOSTICS *this,
        int a2,
        unsigned int a3,
        unsigned __int8 *const a4,
        unsigned int *a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // edi
  unsigned int v7; // r14d
  unsigned int v8; // esi
  bool v10; // zf
  unsigned int v12; // ebx
  unsigned int v13; // r12d
  int v14; // [rsp+20h] [rbp-88h]
  unsigned __int8 *v15; // [rsp+28h] [rbp-80h]
  unsigned __int8 v17[48]; // [rsp+38h] [rbp-70h] BYREF

  v5 = *((_DWORD *)this + 8);
  v6 = 0;
  v7 = *((_DWORD *)this + 9);
  v8 = a3;
  v15 = a4;
  v10 = v7 == v5;
  if ( v7 < v5 )
  {
    v7 += *((_DWORD *)this + 4);
    v10 = v7 == v5;
  }
  if ( !v10 )
  {
    if ( a2 == -1 )
    {
      if ( v7 > v5 )
      {
        v6 = v7 - v5;
        if ( v7 - v5 <= a3 )
          v8 = v7 - v5;
        DXGDIAGNOSTICS::CopyFromBuffer(this, v5, v8, a4);
      }
      goto LABEL_9;
    }
    v14 = 0;
    v12 = 0;
    if ( v5 >= v7 )
      goto LABEL_9;
    while ( 1 )
    {
      memset(v17, 0, sizeof(v17));
      DXGDIAGNOSTICS::CopyFromBuffer(this, v5 % *((_DWORD *)this + 4), 0x30u, v17);
      if ( *(int *)&v17[36] < 0 || (*(_DWORD *)&v17[36] & 0x7FFFFFFF) == a2 )
      {
        if ( !v12 )
          v14 = v5 % *((_DWORD *)this + 4);
        v12 += *(_DWORD *)&v17[4];
        if ( v12 >= v8 && !a5 )
        {
LABEL_26:
          if ( v12 )
          {
            if ( v8 )
            {
              if ( v12 <= v8 )
                v8 = v12;
              DXGDIAGNOSTICS::CopyFromBuffer(this, v14, v8, v15);
            }
            v6 += v12;
          }
          break;
        }
      }
      else if ( v12 )
      {
        v13 = v12;
        if ( v8 < v12 )
          v13 = v8;
        if ( v13 )
        {
          DXGDIAGNOSTICS::CopyFromBuffer(this, v14, v13, v15);
          v15 += v13;
          v8 -= v13;
        }
        v6 += v12;
        v12 = 0;
      }
      v5 += *(_DWORD *)&v17[4];
      if ( v5 >= v7 )
        goto LABEL_26;
    }
  }
LABEL_9:
  if ( a5 )
    *a5 = v6;
  return 0LL;
}
