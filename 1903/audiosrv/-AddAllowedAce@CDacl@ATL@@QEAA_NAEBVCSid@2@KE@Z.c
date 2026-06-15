/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002DBD0
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002C020 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18002D30C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18002C224 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     memcpy_s @ 0x180048684 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C1A88 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800DD7AC (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2, int a3)
{
  ATL::CDacl *v4; // rsi
  HANDLE ProcessHeap; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  char *v8; // r14
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, __int64); // rax
  char *v10; // r14
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, __int64); // rax
  char *v12; // r14
  __int64 (__fastcall ***v13)(_QWORD, _QWORD, __int64); // rax
  DWORD LengthSid; // eax
  unsigned __int64 v15; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  int Error; // eax
  char *v24; // [rsp+20h] [rbp-68h]
  char *v25; // [rsp+20h] [rbp-68h]
  _DWORD *v26; // [rsp+20h] [rbp-68h]
  char *Source; // [rsp+28h] [rbp-60h]
  _DWORD *Sourcea; // [rsp+28h] [rbp-60h]
  _DWORD *Sourceb; // [rsp+28h] [rbp-60h]

  v4 = this;
  if ( !*((_BYTE *)a2 + 76) || !IsValidSid((char *)a2 + 8) )
    return 0;
  if ( *((_BYTE *)v4 + 16) )
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)v4 + 16LL))(v4);
    *((_BYTE *)v4 + 16) = 0;
  }
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
  v7 = v6;
  if ( v6 )
  {
    try
    {
      *v6 = &ATL::CAcl::CAce::`vftable';
      v6[1] = &ATL::CSid::`vftable';
      *((_BYTE *)v6 + 84) = *((_BYTE *)a2 + 76);
      *((_DWORD *)v6 + 22) = *((_DWORD *)a2 + 20);
      Source = (char *)*((_QWORD *)a2 + 11);
      v8 = Source - 24;
      v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)Source - 3)
                                                                                                + 32LL))(*((_QWORD *)Source - 3));
      if ( *((int *)Source - 2) >= 0 && v9 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
      }
      else
      {
        v26 = v8 + 8;
        v17 = (**v9)(v9, *((unsigned int *)v8 + 2), 2LL);
        v8 = (char *)v17;
        if ( !v17 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v18);
        *(_DWORD *)(v17 + 8) = *v26;
        memcpy_s((void *const)(v17 + 24), 2LL * (*v26 + 1), Source, 2LL * (*v26 + 1));
      }
      v7[12] = v8 + 24;
      v24 = (char *)*((_QWORD *)a2 + 12);
      v10 = v24 - 24;
      v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v24 - 3)
                                                                                                 + 32LL))(*((_QWORD *)v24 - 3));
      if ( *((int *)v24 - 2) >= 0 && v11 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v10 + 4);
      }
      else
      {
        Sourcea = v10 + 8;
        v19 = (**v11)(v11, *((unsigned int *)v10 + 2), 2LL);
        v10 = (char *)v19;
        if ( !v19 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v20);
        *(_DWORD *)(v19 + 8) = *Sourcea;
        memcpy_s((void *const)(v19 + 24), 2LL * (*Sourcea + 1), v24, 2LL * (*Sourcea + 1));
      }
      v7[13] = v10 + 24;
      v25 = (char *)*((_QWORD *)a2 + 13);
      v12 = v25 - 24;
      v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v25 - 3)
                                                                                                 + 32LL))(*((_QWORD *)v25 - 3));
      if ( *((int *)v25 - 2) >= 0 && v13 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v12 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v12 + 4);
      }
      else
      {
        Sourceb = v12 + 8;
        v21 = (**v13)(v13, *((unsigned int *)v12 + 2), 2LL);
        v12 = (char *)v21;
        if ( !v21 )
          ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v22);
        *(_DWORD *)(v21 + 8) = *Sourceb;
        memcpy_s((void *const)(v21 + 24), 2LL * (*Sourceb + 1), v25, 2LL * (*Sourceb + 1));
      }
      v7[14] = v12 + 24;
      v7[15] = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      if ( *((_BYTE *)a2 + 76) )
      {
        if ( !IsValidSid((char *)a2 + 8) )
          ATL::AtlThrowImpl(-2147024809);
        LengthSid = GetLengthSid((char *)a2 + 8);
        if ( !CopySid(LengthSid, v7 + 2, (char *)a2 + 8) )
        {
          Error = ATL::AtlHresultFromLastError();
          ATL::AtlThrowImpl(Error);
        }
      }
      *((_DWORD *)v7 + 32) = a3;
      *((_BYTE *)v7 + 132) = 0;
      v7[17] = 0LL;
      *v7 = &ATL::CDacl::CAccessAce::`vftable';
      *((_BYTE *)v7 + 144) = 1;
    }
    catch ( ... )
    {
      v4 = this;
      v7 = 0LL;
    }
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    ATL::AtlThrowImpl(-2147024882);
  v15 = *((_QWORD *)v4 + 4);
  if ( v15 >= *((_QWORD *)v4 + 5)
    && !ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
          (__int64)v4 + 24,
          v15 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  *(_QWORD *)(*((_QWORD *)v4 + 3) + 8 * v15) = v7;
  ++*((_QWORD *)v4 + 4);
  free(*((void **)v4 + 1));
  *((_QWORD *)v4 + 1) = 0LL;
  return 1;
}
