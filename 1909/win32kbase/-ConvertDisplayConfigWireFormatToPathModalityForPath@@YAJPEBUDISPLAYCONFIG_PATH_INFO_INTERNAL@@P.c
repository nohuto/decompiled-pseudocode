/*
 * XREFs of ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C0126EF8
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C01268EC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDisplayConfigWireFormatToPathModalityForPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2)
{
  __int64 v2; // r8
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // r10d
  int v12; // r9d
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // eax

  v2 = 8LL;
  if ( (*(_BYTE *)a1 & 8) != 0 )
  {
    v5 = *((_DWORD *)a1 + 45);
    switch ( v5 )
    {
      case 6:
        v9 = 0x4000000;
        v10 = 256LL;
        v11 = 0x100000;
        v12 = 0x4000;
        v2 = 4LL;
        break;
      case 8:
        v9 = 0x8000000;
        v10 = 512LL;
        v11 = 0x200000;
        v12 = 0x8000;
        break;
      case 10:
        v9 = 0x10000000;
        v10 = 1024LL;
        v11 = 0x400000;
        v12 = 0x10000;
        v2 = 16LL;
        break;
      case 12:
        v9 = 0x20000000;
        v10 = 2048LL;
        v11 = 0x800000;
        v12 = 0x20000;
        v2 = 32LL;
        break;
      case 14:
        v9 = 0x40000000;
        v10 = 4096LL;
        v11 = 0x1000000;
        v12 = 0x40000;
        v2 = 64LL;
        break;
      case 16:
        v9 = 0x80000000;
        v10 = 0x2000LL;
        v11 = 0x2000000;
        v12 = 0x80000;
        v2 = 128LL;
        break;
      default:
        v6 = WdLogNewEntry5_WdError(a1, a2, 16LL);
        v7 = *((unsigned int *)a1 + 45);
LABEL_9:
        *(_QWORD *)(v6 + 24) = v7;
        WdLogEvent5_WdError(v6);
        return 3221225485LL;
    }
    v13 = *((unsigned int *)a1 + 44);
    if ( (_DWORD)v13 )
    {
      v13 = (unsigned int)(v13 - 1);
      if ( (_DWORD)v13 )
      {
        v13 = (unsigned int)(v13 - 1);
        if ( (_DWORD)v13 )
        {
          v13 = (unsigned int)(v13 - 1);
          if ( (_DWORD)v13 )
          {
            if ( (_DWORD)v13 != 1 )
            {
              v6 = WdLogNewEntry5_WdError(v13, v10, v2);
              v7 = *((int *)a1 + 44);
              goto LABEL_9;
            }
            v14 = v9 | *((_DWORD *)a2 + 51) & 0x3FFFFFF;
          }
          else
          {
            v14 = v11 | *((_DWORD *)a2 + 51) & 0xFC0FFFFF;
          }
        }
        else
        {
          v14 = v12 | *((_DWORD *)a2 + 51) & 0xFFF03FFF;
        }
      }
      else
      {
        v14 = v10 | *((_DWORD *)a2 + 51) & 0xFFFFC0FF;
      }
    }
    else
    {
      v14 = v2 | *((_DWORD *)a2 + 51) & 0xFFFFFF03;
    }
    *((_DWORD *)a2 + 51) = v14;
    v15 = *((_DWORD *)a1 + 46);
    if ( v15 && v15 != 12 && (v15 <= 29 || v15 > 33) )
    {
      v6 = WdLogNewEntry5_WdError(v13, v10, v2);
      v7 = *((unsigned int *)a1 + 46);
      goto LABEL_9;
    }
    *((_DWORD *)a2 + 52) = v15;
  }
  return 0LL;
}
