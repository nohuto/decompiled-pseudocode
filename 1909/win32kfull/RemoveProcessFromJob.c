/*
 * XREFs of RemoveProcessFromJob @ 0x1C00EF1F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C00EF30C (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall RemoveProcessFromJob(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned int v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF

  CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(&v13);
  v4 = *(_QWORD *)(a1 + 760);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      v3,
      v2,
      0xDu,
      0x12u,
      (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids,
      a1,
      *(_QWORD *)(a1 + 760));
  v5 = 0;
  if ( v4 )
  {
    v7 = *(_DWORD *)(v4 + 28);
    v8 = 0LL;
    if ( v7 )
    {
      while ( 1 )
      {
        v3 = (unsigned int)v8;
        if ( a1 == *(_QWORD *)(*(_QWORD *)(v4 + 40) + 8LL * (unsigned int)v8) )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          goto LABEL_13;
      }
      *(_QWORD *)(a1 + 760) = 0LL;
      v9 = *(_QWORD *)(v4 + 40) + 8LL * (unsigned int)v8;
      memmove((void *)v9, (const void *)(v9 + 8), 8LL * (unsigned int)(*(_DWORD *)(v4 + 28) - v8 - 1));
      if ( (*(_DWORD *)(v4 + 28))-- == 1 )
      {
        Win32FreePool(*(_QWORD *)(v4 + 40));
        *(_QWORD *)(v4 + 40) = 0LL;
        *(_DWORD *)(v4 + 32) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(v11, v10, 0xDu, 0x13u, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids, a1, v4);
      return 1;
    }
    else
    {
LABEL_13:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(v3, v8, 0xDu, 0x14u, (__int64)&WPP_f3f8cf549e503a6a86e4761750732b2d_Traceguids, a1, v4);
    }
  }
  return v5;
}
