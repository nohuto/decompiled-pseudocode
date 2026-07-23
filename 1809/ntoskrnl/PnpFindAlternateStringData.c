/*
 * XREFs of PnpFindAlternateStringData @ 0x140588E34
 * Callers:
 *     PiGetDeviceRegProperty @ 0x140588C10 (PiGetDeviceRegProperty.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 *     PiGetDeviceRegistryProperty @ 0x140825918 (PiGetDeviceRegistryProperty.c)
 *     PiAuditDeviceOperation @ 0x14083E1F8 (PiAuditDeviceOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpFindAlternateStringData(_WORD *a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  int v7; // ebx
  unsigned __int64 v8; // r9
  __int16 *v9; // rcx
  _WORD *i; // rdx
  __int16 v11; // ax
  __int64 result; // rax
  _WORD *v13; // rcx

  if ( a2 > 2 && *a1 == 64 )
  {
    v7 = 0;
    v8 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
    v9 = a1 + 1;
    if ( (unsigned __int64)(a1 + 2) < v8 )
    {
      for ( i = a1 + 2; (unsigned __int64)i < v8; ++i )
      {
        v11 = *v9;
        if ( !*v9 )
          break;
        if ( v11 == 44 )
        {
          if ( ((*i - 35) & 0xFFF5) != 0 || *i == 43 )
            return 0LL;
          v7 = 1;
        }
        else if ( v11 == 59 )
        {
          if ( !v7 )
            return 0LL;
          v13 = v9 + 1;
          result = 1LL;
          *a3 = v13;
          *a4 = a2 + (_DWORD)a1 - (_DWORD)v13;
          return result;
        }
        ++v9;
      }
    }
  }
  return 0LL;
}
