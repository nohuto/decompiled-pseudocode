/*
 * XREFs of ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800BFFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180006B4C (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     MIDL_user_allocate @ 0x180014480 (MIDL_user_allocate.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002B7E0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800524AC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall CAudioSession::GetInstanceId(CAudioSession *this, unsigned __int16 **a2)
{
  int v4; // eax
  unsigned __int16 *v5; // rbx
  int v6; // edi
  size_t v7; // rdi
  unsigned __int16 *v8; // rax
  unsigned __int16 *v10; // [rsp+30h] [rbp+8h] BYREF

  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v10, (__int64)&ATL::g_strmgr);
  v4 = CAudioSessionInstanceId::ToString((__int64)this + 696, (void **)&v10);
  v5 = v10;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_6;
  v7 = 2LL * (*((_DWORD *)v10 - 4) + 1);
  v8 = (unsigned __int16 *)MIDL_user_allocate(v7);
  *a2 = v8;
  if ( !v8 )
  {
    v6 = -2147024882;
LABEL_6:
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetInstanceId", 432, v6);
    goto LABEL_7;
  }
  v6 = StringCbCopyW((char *)v8, v7, (char *)v5);
  if ( v6 < 0 )
  {
    operator delete(*a2);
    *a2 = 0LL;
    goto LABEL_6;
  }
LABEL_7:
  ATL::CStringData::Release((ATL::CStringData *)(v5 - 12));
  return (unsigned int)v6;
}
