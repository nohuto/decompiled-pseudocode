/*
 * XREFs of RaValidateProtocolCommandIoctl @ 0x1C0042DE4
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C00329BC (RaAdapterProtocolCommandIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0044880 (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaValidateProtocolCommandIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r8d
  _DWORD *v4; // r9
  unsigned __int64 v5; // rbx
  __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  int v12; // eax
  int v13; // ecx
  bool v14; // cf

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  v4 = *(_DWORD **)(a2 + 24);
  v5 = *(unsigned int *)(v2 + 16);
  if ( (unsigned int)v5 >= 0x54 )
  {
    if ( *v4 == 1 && v4[1] == 84 && v4[2] == 3 && v4[6] == 64 )
    {
      v6 = (unsigned int)v4[7];
      if ( !(_DWORD)v6
        || (v7 = (unsigned int)v4[11], v7 >= 0x90) && (v7 & 7) == 0 && *(unsigned int *)(v2 + 8) >= v7 + v6 )
      {
        v8 = (unsigned int)v4[8];
        if ( !(_DWORD)v8 || (v9 = (unsigned int)v4[12], v9 >= 0x90) && (v9 & 7) == 0 && v5 >= v9 + v8 )
        {
          v10 = (unsigned int)v4[9];
          if ( !(_DWORD)v10
            || (v11 = (unsigned int)v4[13], v11 >= 0x90) && (v11 & 7) == 0 && *(unsigned int *)(v2 + 8) >= v11 + v10 )
          {
            if ( (!(_DWORD)v8 || !(_DWORD)v6 || (unsigned int)v4[12] >= v6 + (unsigned __int64)(unsigned int)v4[11])
              && (!(_DWORD)v10
               || (!(_DWORD)v6 || (unsigned int)v4[13] >= v6 + (unsigned __int64)(unsigned int)v4[11])
               && (!(_DWORD)v8 || (unsigned int)v4[13] >= v8 + (unsigned __int64)(unsigned int)v4[12])) )
            {
              v12 = v4[14];
              if ( v12 == 1 )
              {
                v13 = v4[20];
                v14 = (unsigned __int8)v13 < 0xC0u;
                goto LABEL_33;
              }
              if ( v12 == 2 )
              {
                v13 = v4[20];
                v14 = (unsigned __int8)v13 < 0x80u;
LABEL_33:
                if ( !v14 )
                  return v3;
                if ( g_InWinPE == 1 )
                {
                  if ( (unsigned __int8)v13 == 5
                    || (unsigned __int8)v13 == 13
                    || (unsigned __int8)v13 > 0x13u
                    && ((unsigned __int8)v13 <= 0x15u
                     || (unsigned __int8)v13 > 0x1Cu && ((unsigned __int8)v13 <= 0x1Eu || (unsigned __int8)v13 == 128)) )
                  {
                    return v3;
                  }
                }
                else if ( (unsigned __int8)v13 == 20 )
                {
                  return v3;
                }
                v3 = -1056964602;
LABEL_46:
                v4[4] = 3;
                return v3;
              }
            }
          }
        }
      }
    }
    v3 = -1073741811;
    goto LABEL_46;
  }
  if ( (unsigned int)v5 >= 0x14 )
    v4[4] = 3;
  return (unsigned int)-1073741820;
}
