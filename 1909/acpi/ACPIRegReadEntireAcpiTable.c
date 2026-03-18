/*
 * XREFs of ACPIRegReadEntireAcpiTable @ 0x1C00B1D58
 * Callers:
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008F42C (ACPIRegReadAMLRegistryEntry.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0005788 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     WPP_RECORDER_SF_d @ 0x1C005D70C (WPP_RECORDER_SF_d.c)
 *     OSReadRegValue @ 0x1C0090BC8 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIRegReadEntireAcpiTable(void *a1, const void **a2)
{
  _DWORD *v2; // rdi
  char *PoolWithTag; // rbx
  unsigned int v7; // r12d
  void *v8; // rdx
  unsigned int v9; // edi
  unsigned int v10; // ebp
  unsigned int *v11; // r13
  unsigned int *v12; // rsi
  unsigned int v13; // ecx
  unsigned int v14; // eax
  PVOID v15; // rax
  PVOID v16; // r14
  unsigned int v17; // edx
  SIZE_T v18; // rdx
  char *v19; // rax
  char *v20; // r14
  unsigned int v21; // [rsp+30h] [rbp-68h] BYREF
  int v22; // [rsp+34h] [rbp-64h]
  void *v23; // [rsp+38h] [rbp-60h]
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *a2;
  v23 = a1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x4000uLL, 0x42706341u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v7 = v2[1];
  v22 = 0;
  RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", 0);
  v8 = a1;
LABEL_19:
  v21 = 0x4000;
  if ( (int)OSReadRegValue(pszDest, v8, PoolWithTag, &v21) >= 0 )
  {
    v9 = v21;
    if ( v21 >= 8 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = (unsigned int *)*a2;
        v12 = (unsigned int *)&PoolWithTag[v10];
        v13 = v12[1];
        v14 = *v12;
        if ( v13 )
        {
          v18 = v13 + v14;
          if ( (unsigned int)v18 <= v7 )
          {
            v20 = (char *)*a2;
          }
          else
          {
            v7 = v13 + v14;
            v19 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x74706341u);
            v20 = v19;
            if ( !v19 )
            {
LABEL_21:
              ExFreePoolWithTag(PoolWithTag, 0);
              return 3221225626LL;
            }
            memmove(v19, *a2, v11[1]);
            ExFreePoolWithTag((PVOID)*a2, 0);
            *a2 = v20;
            v13 = v12[1];
            v14 = *v12;
          }
          memmove(&v20[v14], v12 + 2, v13);
        }
        else if ( v14 != v11[1] )
        {
          v7 = *v12;
          v15 = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x74706341u);
          v16 = v15;
          if ( !v15 )
            goto LABEL_21;
          v17 = *v12;
          if ( *v12 >= v11[1] )
            v17 = v11[1];
          memmove(v15, *a2, v17);
          ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v16;
        }
        v10 += v12[1] + 8;
        if ( v10 >= v9 )
        {
          RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", ++v22);
          v8 = v23;
          goto LABEL_19;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x23u,
        (__int64)&WPP_5ec9b122c0033a28d1885ef266141b44_Traceguids,
        v21);
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225473LL;
  }
  else
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
}
