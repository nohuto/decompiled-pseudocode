/*
 * XREFs of ViDeadlockCertify @ 0x14093DD8C
 * Callers:
 *     ViDeadlockAnalyze @ 0x14093DAA8 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViDeadlockCertify(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r9
  int *v3; // r11
  int v4; // ebx
  int v5; // edx
  unsigned int v6; // r8d
  __int64 v7; // r11
  _QWORD *v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // r10

  if ( !VfWin32kDllBase
    || VfWin32kDllBase > a1
    || VfWin32kDllBase + (unsigned __int64)(unsigned int)VfWin32kSizeOfImage <= a1
    || !*(_BYTE *)(*(_QWORD *)(a2 + 64) + 48LL) )
  {
    LODWORD(v2) = *((_DWORD *)ViDeadlockGlobals + 8216);
    if ( (unsigned int)v2 < 3
      || (((v3 = *(int **)(*((_QWORD *)ViDeadlockGlobals + 4110) + 56LL),
            v4 = **(_DWORD **)(*((_QWORD *)ViDeadlockGlobals + 4109) + 56LL),
            v4 != 5)
        || (v5 = *v3, *v3 != 6))
       && ((v5 = *v3, *v3 != 5) || v4 != 6)
       || (!VfTcpIpDllBase
        || VfTcpIpDllBase > a1
        || VfTcpIpDllBase + (unsigned __int64)(unsigned int)VfTcpIpSizeOfImage <= a1)
       && (!VfTdxDllBase || VfTdxDllBase > a1 || VfTdxDllBase + (unsigned __int64)(unsigned int)VfTdxSizeOfImage <= a1)
       && (!VfMrxsmbDllBase
        || VfMrxsmbDllBase > a1
        || VfMrxsmbDllBase + (unsigned __int64)(unsigned int)VfMrxsmbSizeOfImage <= a1))
      && (v4 != 1
       || v5 != 1
       || (!VfTmDllBase || VfTmDllBase > a1 || VfTmDllBase + (unsigned __int64)(unsigned int)VfTmSizeOfImage <= a1)
       && (!VfKsDllBase || VfKsDllBase > a1 || VfKsDllBase + (unsigned __int64)(unsigned int)VfKsSizeOfImage <= a1)) )
    {
      v6 = 1;
      if ( (unsigned int)v2 <= 1 )
      {
LABEL_31:
        if ( (unsigned int)v2 <= 1 )
          return 1LL;
        while ( 1 )
        {
          v2 = (unsigned int)(v2 - 1);
          v8 = (_QWORD *)**((_QWORD **)ViDeadlockGlobals + v2 + 4109);
          if ( v8 )
            break;
LABEL_39:
          if ( (unsigned int)v2 <= 1 )
            return 1LL;
        }
        while ( 1 )
        {
          LODWORD(v9) = v2 - 1;
          if ( (_DWORD)v2 != 1 )
            break;
LABEL_38:
          v8 = (_QWORD *)*v8;
          if ( !v8 )
            goto LABEL_39;
        }
        while ( 1 )
        {
          v9 = (unsigned int)(v9 - 1);
          v10 = (_QWORD *)**((_QWORD **)ViDeadlockGlobals + v9 + 4109);
          if ( v10 )
            break;
LABEL_37:
          if ( !(_DWORD)v9 )
            goto LABEL_38;
        }
        while ( *(_QWORD *)(v10[7] + 8LL) != *(_QWORD *)(v8[7] + 8LL) )
        {
          v10 = (_QWORD *)*v10;
          if ( !v10 )
            goto LABEL_37;
        }
        ++*((_DWORD *)ViDeadlockGlobals + 8207);
      }
      else
      {
        while ( 1 )
        {
          v7 = *((_QWORD *)ViDeadlockGlobals + v6 + 4108);
          if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)ViDeadlockGlobals + v6 + 4109) + 56LL) + 8LL) == *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8LL)
            && (*(_DWORD *)(v7 + 72) & 2) != 0 )
          {
            break;
          }
          if ( ++v6 >= (unsigned int)v2 )
            goto LABEL_31;
        }
      }
    }
  }
  return 0LL;
}
