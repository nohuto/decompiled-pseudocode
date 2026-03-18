/*
 * XREFs of ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x1800E6568
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002841C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180029F40 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800CCE08 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_RegisterForNotifications(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS *a4)
{
  char *v6; // rcx
  struct CChannelContext **v7; // r8
  __int64 v8; // rax
  unsigned int v9; // r9d
  struct CChannelContext **v10; // rdx
  unsigned int v11; // edx
  signed int v12; // eax
  __int64 v13; // rcx
  signed int v14; // ebx
  unsigned int i; // eax
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+34h] [rbp-1Ch]
  __int64 v19; // [rsp+3Ch] [rbp-14h]
  __int64 v20; // [rsp+44h] [rbp-Ch]
  CDirtyRegion *v21; // [rsp+68h] [rbp+18h] BYREF

  v21 = a2;
  v6 = (char *)this + 432;
  v7 = *(struct CChannelContext ***)v6;
  if ( *((_BYTE *)a4 + 4) )
  {
    v8 = *((unsigned int *)v6 + 6);
    v9 = 0;
    if ( (_DWORD)v8 )
    {
      v10 = *(struct CChannelContext ***)v6;
      do
      {
        if ( a2 == *v10 )
          break;
        ++v9;
        ++v10;
      }
      while ( v9 < (unsigned int)v8 );
    }
    if ( v9 == *((_DWORD *)this + 114) )
    {
      v11 = v8 + 1;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        v14 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      else
      {
        if ( v11 <= *((_DWORD *)v6 + 5) )
        {
          v7[v8] = v21;
          *((_DWORD *)v6 + 6) = v11;
LABEL_11:
          _InterlockedIncrement((volatile signed __int32 *)v21 + 2);
          v17 = 5;
          v18 = 0LL;
          v19 = 0LL;
          v20 = 0LL;
          HIDWORD(v18) = *((_DWORD *)this + 92);
          LODWORD(v19) = HIDWORD(v18);
          CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v17);
          return 0LL;
        }
        v12 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v6, 8u, (__int64)v7, &v21);
        v14 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC3u, 0LL);
      }
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0x4B6u, 0LL);
        return 0LL;
      }
      goto LABEL_11;
    }
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)v6 + 6); ++v7 )
    {
      if ( a2 == *v7 )
        break;
      ++i;
    }
    if ( i < *((_DWORD *)this + 114) && (unsigned int)DynArray<CChannelContext *,1>::Remove((__int64 *)v6, &v21) )
      CDirtyRegion::Release(v21);
  }
  return 0LL;
}
