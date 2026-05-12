/*
 * XREFs of StorCompareScsiDeviceId @ 0x1C0012E74
 * Callers:
 *     StorCompareScsiIdentity @ 0x1C001A388 (StorCompareScsiIdentity.c)
 *     RaidCheckEnclosureIdMapping @ 0x1C003D0A8 (RaidCheckEnclosureIdMapping.c)
 * Callees:
 *     StorGetNextVPDIdDescriptor @ 0x1C0012FC4 (StorGetNextVPDIdDescriptor.c)
 *     StorInitVPDIdEnumeration @ 0x1C0013010 (StorInitVPDIdEnumeration.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C00260A0 (__report_rangecheckfailure.c)
 *     memcmp @ 0x1C002BF80 (memcmp.c)
 */

__int64 __fastcall StorCompareScsiDeviceId(__int64 a1, __int64 a2)
{
  unsigned __int8 i; // al
  __int64 v5; // rcx
  __int64 NextVPDIdDescriptor; // rax
  _BYTE *v7; // rbx
  unsigned __int8 v8; // si
  _BYTE *v9; // rax
  unsigned __int8 v10; // cl
  bool v12; // zf
  _BYTE v13[24]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v14[24]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v15[16]; // [rsp+50h] [rbp-30h]
  _BYTE v16[16]; // [rsp+60h] [rbp-20h]

  for ( i = 0; i <= 8u; ++i )
  {
    v5 = i;
    if ( i >= 9uLL )
      _report_rangecheckfailure(i, a1);
    v15[v5] = 0;
    v16[v5] = 0;
  }
  if ( (unsigned __int8)StorInitVPDIdEnumeration(v13, a1) )
  {
    while ( 1 )
    {
      NextVPDIdDescriptor = StorGetNextVPDIdDescriptor(v13);
      v7 = (_BYTE *)NextVPDIdDescriptor;
      if ( !NextVPDIdDescriptor )
        break;
      v8 = *(_BYTE *)(NextVPDIdDescriptor + 1);
      if ( (v8 & 0x30) == 0 && (v8 & 0xFu) <= 8 )
      {
        if ( !(unsigned __int8)StorInitVPDIdEnumeration(v14, a2) )
          break;
        while ( 1 )
        {
          v9 = (_BYTE *)StorGetNextVPDIdDescriptor(v14);
          if ( !v9 )
            break;
          if ( ((v8 ^ v9[1]) & 0x30) == 0 && ((*v7 ^ *v9) & 0xF) == 0 && (v8 & 0xF) == (v9[1] & 0xF) )
          {
            v10 = v7[3];
            v15[v8 & 0xF] = 1;
            if ( v10 == v9[3] && !memcmp(v7 + 4, v9 + 4, v10) )
              v16[v8 & 0xF] = 1;
          }
        }
      }
    }
  }
  if ( v15[3] || v15[2] || v15[8] )
  {
    if ( v16[3] || v16[2] || v16[8] )
      return 0LL;
  }
  else
  {
    if ( v15[1] )
    {
      v12 = v16[1] == 0;
    }
    else
    {
      if ( !v15[0] )
        return 1LL;
      v12 = v16[0] == 0;
    }
    if ( !v12 )
      return 0LL;
  }
  return 1LL;
}
