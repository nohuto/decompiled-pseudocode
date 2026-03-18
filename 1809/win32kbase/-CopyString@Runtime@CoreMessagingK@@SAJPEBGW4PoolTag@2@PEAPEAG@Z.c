/*
 * XREFs of ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C00854D8
 * Callers:
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C0083FAC (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C0085694 (-AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00856D0 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall CoreMessagingK::Runtime::CopyString(unsigned __int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rdi
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (char *)a1;
  *a3 = 0LL;
  v4 = RtlStringCbLengthW(L"Kernel\\MIT\\InputPort", 0xFFFFFFFEuLL, (unsigned __int64 *)&v7);
  if ( v4 >= 0 )
  {
    v5 = (unsigned __int64)v7;
    if ( (unsigned __int64)v7 >= 0xFFFFFFFC )
    {
      return (unsigned int)-1073741585;
    }
    else
    {
      v4 = CoreMessagingK::Runtime::AllocUninitialized(v7 + 2, 1314082115LL, &v7);
      if ( v4 >= 0 )
      {
        *a3 = v7;
        memmove(*a3, L"Kernel\\MIT\\InputPort", v5 + 2);
      }
    }
  }
  return (unsigned int)v4;
}
