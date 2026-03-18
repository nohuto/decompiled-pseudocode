/*
 * XREFs of ?CreateSharedObject@@YAJPEBG_NU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@ZP6AX45_K8@ZP6AX5@ZP6AE455D@ZPEAPEAU_OBJECT_TYPE@@KW4_POOL_TYPE@@@Z @ 0x1C0155C1C
 * Callers:
 *     CreateDxgkSharedObjectTypes @ 0x1C0155888 (CreateDxgkSharedObjectTypes.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall CreateSharedObject(
        PCWSTR SourceString,
        char a2,
        __m128i *a3,
        int (__high *a4)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int),
        void (*a5)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64),
        void (*a6)(void *),
        unsigned __int8 (*a7)(struct _EPROCESS *, void *, void *, char),
        struct _OBJECT_TYPE **a8,
        unsigned int a9,
        enum _POOL_TYPE a10)
{
  __m128i v10; // xmm6
  struct _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-B1h] BYREF
  _QWORD v16[16]; // [rsp+38h] [rbp-A1h] BYREF

  v10 = *a3;
  memset(v16, 0, 0x78uLL);
  LODWORD(v16[1]) = 256;
  v16[7] = a4;
  LOWORD(v16[0]) = 120;
  v16[8] = a5;
  v16[9] = a6;
  v16[13] = a7;
  *(__m128i *)((char *)&v16[1] + 4) = v10;
  HIDWORD(v16[0]) = a9;
  HIDWORD(v16[3]) = _mm_srli_si128(v10, 8).m128i_i32[1];
  HIDWORD(v16[4]) = a10;
  v16[5] = 0LL;
  v16[6] = 0LL;
  memset(&v16[10], 0, 24);
  BYTE2(v16[0]) = (a4 != 0LL ? 0x10 : 0) | BYTE2(v16[0]) & 0x8D | (2 * a2) & 0x8F | 0xD;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return ObCreateObjectType(&DestinationString, v16, 0LL, a8);
}
