/*
 * XREFs of RtlpApplyAclToObject @ 0x140630650
 * Callers:
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14060EC2C (ExpWnfSpecializeSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpApplyAclToObject(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // r8d
  unsigned __int8 *v5; // rax
  int v6; // r11d
  int v7; // edx
  int v8; // edx
  unsigned int v9; // ecx
  int v10; // ecx

  if ( a1 )
  {
    v4 = 0;
    v5 = (unsigned __int8 *)(a1 + 8);
    if ( *(_WORD *)(a1 + 4) )
    {
      v6 = 1651;
      do
      {
        if ( (*v5 < 0xBu || (unsigned __int8)(*v5 - 13) <= 1u) && (v5[1] & 8) == 0 )
        {
          v7 = *((_DWORD *)v5 + 1);
          if ( v7 < 0 )
          {
            v7 |= *a2;
            *((_DWORD *)v5 + 1) = v7;
          }
          if ( (v7 & 0x40000000) != 0 )
          {
            v7 |= a2[1];
            *((_DWORD *)v5 + 1) = v7;
          }
          if ( (v7 & 0x20000000) != 0 )
          {
            v7 |= a2[2];
            *((_DWORD *)v5 + 1) = v7;
          }
          if ( (v7 & 0x10000000) != 0 )
          {
            v7 |= a2[3];
            *((_DWORD *)v5 + 1) = v7;
          }
          v8 = v7 & 0xFFFFFFF;
          *((_DWORD *)v5 + 1) = v8;
          v9 = *v5;
          if ( (unsigned __int8)v9 <= 0xAu && _bittest(&v6, v9) )
            v10 = a2[3];
          else
            v10 = a2[3] | 0x1000000;
          *((_DWORD *)v5 + 1) = v8 & v10;
        }
        ++v4;
        v5 += *((unsigned __int16 *)v5 + 1);
      }
      while ( v4 < *(unsigned __int16 *)(a1 + 4) );
    }
  }
}
