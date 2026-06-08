/*
 * XREFs of DeregisterKernelIdleDomains @ 0x1C0024984
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0003A60 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     GetDevExtFromIndex @ 0x1C00082B4 (GetDevExtFromIndex.c)
 *     DeregisterIdleDomain @ 0x1C0032454 (DeregisterIdleDomain.c)
 *     UpdateKernelIdleDomains @ 0x1C003593C (UpdateKernelIdleDomains.c)
 */

__int64 __fastcall DeregisterKernelIdleDomains(__int64 a1)
{
  unsigned int *v2; // rdx
  unsigned int v3; // edi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int *v7; // rdi
  __int64 v8; // rdx
  __int64 DevExtFromIndex; // rax
  int updated; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned int i; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[3]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v15[176]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[176]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v16, 0, 0xA8uLL);
  memset(v14, 0, sizeof(v14));
  memset(v15, 0, 0xA8uLL);
  KeInitializeAffinityEx(v15);
  v2 = *(unsigned int **)(a1 + 712);
  if ( v2 )
  {
    v5 = 0;
    i = 0;
    if ( *v2 )
    {
      v6 = 0;
      do
      {
        v7 = &v2[8 * v6];
        v8 = *((_QWORD *)v7 + 2);
        if ( v8 )
        {
          KeCopyAffinityEx(v16, v8 + 48);
          if ( (unsigned __int8)DeregisterIdleDomain(a1, v7 + 2) )
            KeOrAffinityEx(v16, v15, v15);
          v5 = i;
        }
        v2 = *(unsigned int **)(a1 + 712);
        i = ++v5;
        v6 = v5;
      }
      while ( v5 < *v2 );
    }
    v3 = 0;
    KeInitializeEnumerationContext(v14, v15);
    while ( !(unsigned int)KeEnumerateNextProcessor(&i, v14) )
    {
      DevExtFromIndex = GetDevExtFromIndex(i);
      updated = UpdateKernelIdleDomains(DevExtFromIndex);
      if ( updated < 0 )
        v3 = updated;
    }
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 696) + 56LL);
    v12 = 0LL;
    for ( i = 0; (unsigned int)v12 < v11; i = v12 )
    {
      *(_QWORD *)(88 * v12 + *(_QWORD *)(a1 + 696) + 136) = 0LL;
      v12 = i + 1;
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 712), 0x72637250u);
    *(_QWORD *)(a1 + 712) = 0LL;
  }
  else
  {
    return 0;
  }
  return v3;
}
