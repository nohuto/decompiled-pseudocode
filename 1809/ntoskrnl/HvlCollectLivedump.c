/*
 * XREFs of HvlCollectLivedump @ 0x14027773C
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140578890 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129C90 (VslpEnterIumSecureMode.c)
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272284 (HvlpReleaseHypercallPage.c)
 */

NTSTATUS __fastcall HvlCollectLivedump(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  NTSTATUS result; // eax
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int16 v10; // ax
  int v11; // esi
  void *v12; // rcx
  unsigned int v13; // ebx
  PHYSICAL_ADDRESS v14[3]; // [rsp+20h] [rbp-148h] BYREF
  PHYSICAL_ADDRESS v15[3]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v16[112]; // [rsp+60h] [rbp-108h] BYREF
  _BYTE v17[32]; // [rsp+D0h] [rbp-98h] BYREF
  _BYTE v18[64]; // [rsp+F0h] [rbp-78h] BYREF

  if ( (HvlpRootFlags & 2) == 0 || !qword_140437508 )
    return -1073741637;
  if ( VslVsmEnabled )
  {
    memset(v16, 0, 0x68uLL);
    result = VslpEnterIumSecureMode(2u, 234LL, 0, (__int64)v16);
    if ( result >= 0 )
    {
      *(_OWORD *)(a4 + 16) = HvlSkCrashdumpGuid;
      *a3 = 0LL;
    }
  }
  else
  {
    v8 = HvlpAcquireHypercallPage(v15, 1, (__int64)v18, 32LL);
    v9 = HvlpAcquireHypercallPage(v14, 2, (__int64)v17, 16LL);
    *v8 = 0LL;
    *(_OWORD *)(v8 + 1) = *(_OWORD *)a2;
    v8[3] = *(_QWORD *)(a2 + 16);
    v10 = HvcallCodeVa();
    if ( !v10 || v10 == 51 )
    {
      *a3 = *v9;
      v11 = 0;
    }
    else
    {
      v11 = -1073741823;
    }
    HvlpReleaseHypercallPage((unsigned int *)v14);
    HvlpReleaseHypercallPage((unsigned int *)v15);
    if ( v11 >= 0 )
    {
      v12 = *(void **)(a4 + 32);
      v13 = dword_140437518 << 12;
      if ( v12 == *(void **)a4 && *(_DWORD *)(a4 + 8) >= v13 )
        memmove(v12, qword_140437508, v13);
      else
        *(_QWORD *)(a4 + 32) = qword_140437508;
      *(_DWORD *)(a4 + 40) = v13;
      *(_OWORD *)(a4 + 16) = HvlCrashdumpGuid;
    }
    return v11;
  }
  return result;
}
