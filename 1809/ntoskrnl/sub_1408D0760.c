/*
 * XREFs of sub_1408D0760 @ 0x1408D0760
 * Callers:
 *     <none>
 * Callees:
 *     ExpLicUpdateChecksum @ 0x1400077F0 (ExpLicUpdateChecksum.c)
 *     ExpSetKernelDataProtection @ 0x1405A25F4 (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1405A2B24 (ExpGetKernelDataProtection.c)
 *     sub_140705868 @ 0x140705868 (sub_140705868.c)
 */

__int64 __fastcall sub_1408D0760(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  int v9; // ebx
  int KernelDataProtection; // eax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int updated; // ecx
  unsigned __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  __int128 v18; // [rsp+38h] [rbp-21h] BYREF
  __int128 v19; // [rsp+48h] [rbp-11h]
  __int128 v20; // [rsp+58h] [rbp-1h]
  _OWORD v21[3]; // [rsp+68h] [rbp+Fh] BYREF

  if ( Data )
  {
    KernelDataProtection = ExpGetKernelDataProtection(v21);
    if ( KernelDataProtection < 0 )
    {
      v9 = 4;
      if ( KernelDataProtection == -1073741275 )
      {
        LOBYTE(v11) = -1;
        if ( Data )
        {
          *(_QWORD *)&v18 = 0LL;
          v19 = 0uLL;
          *(_QWORD *)&v20 = 0LL;
          DWORD2(v18) = 4;
          BYTE8(v20) = 1;
          updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v18);
          if ( !updated )
          {
            if ( (_DWORD)v12 )
            {
              v14 = 16LL * (unsigned int)v12;
              updated = v11 < v14 ? 0xC0000095 : 0;
              if ( v14 <= v11 )
                updated = ExpLicUpdateChecksum((__int64)qword_140970D00, v12, &v18);
            }
          }
          if ( updated )
          {
            *(_QWORD *)&v18 = 0LL;
            DWORD2(v18) = 4;
          }
          v15 = 0;
          v21[0] = v18;
          v21[1] = v19;
          v21[2] = v20;
        }
        else
        {
          v15 = -1073741811;
        }
        if ( v15 >= 0 )
        {
          DWORD2(v21[0]) = 4;
          ExpSetKernelDataProtection((__int64)v21, v11, 0);
        }
      }
    }
    else
    {
      v9 = DWORD2(v21[0]);
    }
  }
  else
  {
    v9 = dword_14096E0B8;
  }
  if ( v9 )
  {
    *a5 = 1;
    return (unsigned int)sub_140705868(a1, a2, a3, a4, 0);
  }
  else
  {
    v16 = -1073741772;
    *a5 = 0;
  }
  return v16;
}
