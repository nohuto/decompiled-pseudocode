/*
 * XREFs of sub_14090CC10 @ 0x14090CC10
 * Callers:
 *     <none>
 * Callees:
 *     ExpLicUpdateChecksum @ 0x1400FA64C (ExpLicUpdateChecksum.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpSetKernelDataProtection @ 0x1406AC7AC (ExpSetKernelDataProtection.c)
 *     ExpGetKernelDataProtection @ 0x1406ACCC0 (ExpGetKernelDataProtection.c)
 *     sub_14072B4E0 @ 0x14072B4E0 (sub_14072B4E0.c)
 */

__int64 __fastcall sub_14090CC10(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  int v9; // ebx
  int KernelDataProtection; // eax
  unsigned __int64 v11; // r9
  int updated; // eax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ecx
  __int128 v17; // [rsp+40h] [rbp-29h] BYREF
  __int128 v18; // [rsp+50h] [rbp-19h]
  __int128 v19; // [rsp+60h] [rbp-9h]
  _OWORD v20[3]; // [rsp+70h] [rbp+7h] BYREF

  memset(v20, 0, sizeof(v20));
  if ( !Data )
  {
    v9 = dword_1409AD0F8;
    goto LABEL_17;
  }
  KernelDataProtection = ExpGetKernelDataProtection(v20);
  if ( KernelDataProtection >= 0 )
  {
    v9 = DWORD2(v20[0]);
    goto LABEL_17;
  }
  v9 = 4;
  if ( KernelDataProtection == -1073741275 )
  {
    LOBYTE(v11) = -1;
    HIDWORD(v17) = 0;
    *(_DWORD *)((char *)&v19 + 9) = 0;
    *(_WORD *)((char *)&v19 + 13) = 0;
    HIBYTE(v19) = 0;
    if ( !Data )
    {
      v14 = -1073741811;
LABEL_15:
      if ( v14 >= 0 )
      {
        DWORD2(v20[0]) = 4;
        ExpSetKernelDataProtection((__int64)v20, v11, 0);
      }
      goto LABEL_17;
    }
    *(_QWORD *)&v17 = 0LL;
    v18 = 0uLL;
    DWORD2(v17) = 4;
    *(_QWORD *)&v19 = 0LL;
    BYTE8(v19) = 1;
    updated = ExpLicUpdateChecksum((__int64)Data + 20, (unsigned int)NumOfElements, &v17);
    if ( updated )
      goto LABEL_12;
    if ( (_DWORD)v13 )
    {
      if ( 16 * (unsigned __int64)(unsigned int)v13 > v11 )
        goto LABEL_12;
      updated = ExpLicUpdateChecksum((__int64)qword_1409AFF80, v13, &v17);
    }
    if ( !updated )
    {
LABEL_13:
      v14 = 0;
      v20[0] = v17;
      v20[1] = v18;
      v20[2] = v19;
      goto LABEL_15;
    }
LABEL_12:
    *(_QWORD *)&v17 = 0LL;
    DWORD2(v17) = 4;
    goto LABEL_13;
  }
LABEL_17:
  if ( v9 )
  {
    *a5 = 1;
    return (unsigned int)sub_14072B4E0(a1, a2, a3, a4, 0);
  }
  else
  {
    v15 = -1073741772;
    *a5 = 0;
  }
  return v15;
}
