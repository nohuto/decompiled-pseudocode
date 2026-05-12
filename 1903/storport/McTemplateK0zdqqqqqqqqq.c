/*
 * XREFs of McTemplateK0zdqqqqqqqqq @ 0x1C003A184
 * Callers:
 *     StorpAllocateHostMemoryBuffer @ 0x1C003C000 (StorpAllocateHostMemoryBuffer.c)
 * Callees:
 *     McGenEventWrite @ 0x1C000DD7C (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateK0zdqqqqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *p_Logger,
        char a5,
        int a6,
        char a7,
        char a8,
        int a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  __int64 v14; // rax
  __int64 v15; // rcx
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v20; // [rsp+50h] [rbp-B0h]
  int v21; // [rsp+58h] [rbp-A8h]
  int v22; // [rsp+5Ch] [rbp-A4h]
  char *v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]
  int *v25; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  char *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  char *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  char *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  char *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  char *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  char *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]

  v18 = HmbMaximumSize;
  v17 = HmbAllocationPolicy;
  if ( p_Logger )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)p_Logger + v14) );
    v15 = (unsigned int)(2 * v14 + 2);
  }
  else
  {
    v15 = 10LL;
  }
  v22 = 0;
  v21 = v15;
  if ( !p_Logger )
    p_Logger = &Context.Logger;
  v24 = 4LL;
  v20 = p_Logger;
  v23 = &a5;
  v26 = 4LL;
  v25 = &v17;
  v28 = 4LL;
  v27 = &a7;
  v30 = 4LL;
  v29 = &a8;
  v31 = &v18;
  v33 = &a10;
  v35 = &a11;
  v37 = &a12;
  v39 = &a13;
  v41 = &a14;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 4LL;
  return McGenEventWrite((PMCGEN_TRACE_CONTEXT)v15, &EventHmbAllocation, 0LL, 0xCu, &EventData);
}
