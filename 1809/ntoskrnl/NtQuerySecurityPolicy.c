/*
 * XREFs of NtQuerySecurityPolicy @ 0x14089C1A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepCaptureUnicodeStringArray @ 0x140626B30 (SepCaptureUnicodeStringArray.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQuerySecurityPolicy(
        SIZE_T a1,
        SIZE_T a2,
        SIZE_T a3,
        _DWORD *a4,
        volatile void *a5,
        unsigned __int64 Address)
{
  PVOID PoolWithQuotaTag; // rsi
  char PreviousMode; // r14
  int v11; // ebx
  _DWORD *v12; // r15
  void *v13; // r12
  unsigned int v14; // eax
  _DWORD Length[3]; // [rsp+44h] [rbp-54h] BYREF
  int v17; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  PVOID v19; // [rsp+60h] [rbp-38h] BYREF
  PVOID v20[3]; // [rsp+68h] [rbp-30h] BYREF

  P = 0LL;
  v19 = 0LL;
  PoolWithQuotaTag = 0LL;
  *(_QWORD *)&Length[1] = 0LL;
  v20[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = SepCaptureUnicodeStringArray(a1, 1u, PreviousMode, (SIZE_T *)&P);
  if ( v11 >= 0 )
  {
    v11 = SepCaptureUnicodeStringArray(a2, 1u, PreviousMode, (SIZE_T *)&v19);
    if ( v11 >= 0 )
    {
      v11 = SepCaptureUnicodeStringArray(a3, 1u, PreviousMode, (SIZE_T *)v20);
      if ( v11 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(a4, 4uLL, 4u);
          v12 = (_DWORD *)Address;
          if ( (Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address + 4 > 0x7FFFFFFF0000LL || Address + 4 < Address )
            MEMORY[0x7FFFFFFF0000] = 0;
          Length[0] = *(_DWORD *)Address;
          ProbeForWrite((volatile void *)Address, 4uLL, 4u);
          v13 = (void *)a5;
          if ( a5 )
          {
            ProbeForWrite(a5, Length[0], 1u);
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, Length[0], 0x20206553u);
            *(_QWORD *)&Length[1] = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              v11 = -1073741670;
              goto LABEL_26;
            }
          }
        }
        else
        {
          v13 = (void *)a5;
          PoolWithQuotaTag = (PVOID)a5;
          *(_QWORD *)&Length[1] = a5;
          v12 = (_DWORD *)Address;
          Length[0] = *(_DWORD *)Address;
        }
        if ( qword_14040EE58 )
        {
          if ( !PoolWithQuotaTag || Length[0] )
            v11 = qword_14040EE58(P, v19, v20[0], &v17, PoolWithQuotaTag, Length);
          else
            v11 = -1073741811;
        }
        else
        {
          v11 = -1073741637;
        }
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
        {
          *a4 = v17;
          v14 = Length[0];
          *v12 = Length[0];
          if ( v13 )
          {
            if ( PreviousMode == 1 && v11 >= 0 )
              memmove(v13, PoolWithQuotaTag, v14);
          }
        }
      }
    }
  }
LABEL_26:
  if ( PreviousMode == 1 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( v20[0] )
      ExFreePoolWithTag(v20[0], 0);
  }
  if ( PoolWithQuotaTag && PreviousMode == 1 )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)v11;
}
