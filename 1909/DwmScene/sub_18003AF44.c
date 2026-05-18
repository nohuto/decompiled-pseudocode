/*
 * XREFs of sub_18003AF44 @ 0x18003AF44
 * Callers:
 *     sub_18003A0C0 @ 0x18003A0C0 (sub_18003A0C0.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18000EE78 @ 0x18000EE78 (sub_18000EE78.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180010000 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180015A44 @ 0x180015A44 (sub_180015A44.c)
 *     sub_180015F14 @ 0x180015F14 (sub_180015F14.c)
 *     sub_1800171D4 @ 0x1800171D4 (sub_1800171D4.c)
 *     sub_18002328C @ 0x18002328C (sub_18002328C.c)
 *     sub_1800254C0 @ 0x1800254C0 (sub_1800254C0.c)
 *     sub_18002EB1C @ 0x18002EB1C (sub_18002EB1C.c)
 *     sub_18003178C @ 0x18003178C (sub_18003178C.c)
 *     sub_180039C68 @ 0x180039C68 (sub_180039C68.c)
 *     sub_180064408 @ 0x180064408 (sub_180064408.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18009DF38 @ 0x18009DF38 (sub_18009DF38.c)
 *     sub_18009EC74 @ 0x18009EC74 (sub_18009EC74.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18003AF44(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r14
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rbx
  __int64 result; // rax
  __int64 v12; // r12
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rdx
  int v15; // ett
  signed __int32 v16; // eax
  bool v17; // zf
  _QWORD *v18; // r14
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rcx
  int v21; // r9d
  __int128 *v22; // rdx
  _QWORD *v23; // r14
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rcx
  _QWORD *v26; // r15
  __int64 *v27; // rax
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rbx
  __int64 *v30; // rcx
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // r14
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rsi
  volatile signed __int32 *v39; // rsi
  volatile signed __int32 *v40; // rsi
  __int64 *v41; // rcx
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rbx
  signed __int32 v44; // eax
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v48; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v50; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v51; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v52; // [rsp+78h] [rbp-90h] BYREF
  __int128 v53; // [rsp+88h] [rbp-80h]
  _QWORD *v54; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A0h] [rbp-68h]
  volatile signed __int32 *v56; // [rsp+A8h] [rbp-60h]
  _QWORD *v57; // [rsp+B0h] [rbp-58h]
  volatile signed __int32 *v58; // [rsp+B8h] [rbp-50h]
  __int64 v59; // [rsp+C0h] [rbp-48h] BYREF
  volatile signed __int32 *v60; // [rsp+C8h] [rbp-40h]
  __int64 v61; // [rsp+D0h] [rbp-38h] BYREF
  volatile signed __int32 *v62; // [rsp+D8h] [rbp-30h]
  __int64 v63; // [rsp+E0h] [rbp-28h] BYREF
  volatile signed __int32 *v64; // [rsp+E8h] [rbp-20h]
  __int128 v65; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v66; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v67; // [rsp+110h] [rbp+8h]
  __int64 v68; // [rsp+118h] [rbp+10h]
  __int64 v69; // [rsp+120h] [rbp+18h]
  _BYTE v70[8]; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v71; // [rsp+130h] [rbp+28h]
  __int64 v72; // [rsp+138h] [rbp+30h] BYREF
  volatile signed __int32 *v73; // [rsp+140h] [rbp+38h]
  __int64 v74; // [rsp+148h] [rbp+40h] BYREF
  volatile signed __int32 *v75; // [rsp+150h] [rbp+48h]
  _QWORD v76[3]; // [rsp+158h] [rbp+50h] BYREF
  unsigned __int64 v77; // [rsp+170h] [rbp+68h]
  _QWORD v78[4]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v79[4]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v81; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v82; // [rsp+200h] [rbp+F8h] BYREF
  __int128 v83; // [rsp+208h] [rbp+100h] BYREF
  int v84; // [rsp+218h] [rbp+110h] BYREF
  __int64 v85; // [rsp+21Ch] [rbp+114h]
  int v86; // [rsp+224h] [rbp+11Ch]
  __int64 v87; // [rsp+228h] [rbp+120h]
  _BYTE v88[8]; // [rsp+230h] [rbp+128h] BYREF
  int v89; // [rsp+238h] [rbp+130h]

  v68 = -2LL;
  v69 = a2;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v54 = v4;
  sub_180015F14(v4, &v59, 1u);
  v5 = (_QWORD *)(a1 + 128);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 128), &v59);
  v6 = v60;
  if ( v60 )
  {
    if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v50 = 0LL;
  v7 = *(_QWORD *)(a1 + 136);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(a1 + 136);
  }
  *(_QWORD *)&v50 = *v5;
  *((_QWORD *)&v50 + 1) = v7;
  v8 = a2 + 8;
  sub_180039C68(a2 + 8, (__int64)&v50, *(_DWORD *)a2, 4);
  v9 = (__int64 *)sub_18009EC74(*v5, v70, *(unsigned int *)(a1 + 88));
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), v9);
  v10 = v71;
  if ( v71 )
  {
    if ( _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  result = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = *(_QWORD *)(a1 + 80);
  if ( v14 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v14 + 8);
      if ( !(_DWORD)result )
        break;
      v15 = *(_DWORD *)(v14 + 8);
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), result + 1, result);
      if ( v15 == (_DWORD)result )
      {
        v12 = *(_QWORD *)(a1 + 72);
        v13 = *(volatile signed __int32 **)(a1 + 80);
        if ( v13 )
          _InterlockedIncrement(v13 + 2);
        break;
      }
    }
  }
  v55 = v12;
  v56 = v13;
  if ( v13 )
  {
    v16 = _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF);
    v17 = v16 == 1;
    result = (unsigned int)(v16 - 1);
    if ( v17 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( *(_BYTE *)(a2 + 4) )
  {
    sub_180015F14(v4, &v61, 1u);
    v18 = (_QWORD *)(a1 + 144);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 144), &v61);
    v19 = v62;
    if ( v62 )
    {
      if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    sub_180064684(*v18, 2LL);
    v51 = 0LL;
    v20 = *(_QWORD *)(a1 + 152);
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      v20 = *(_QWORD *)(a1 + 152);
    }
    *(_QWORD *)&v51 = *v18;
    *((_QWORD *)&v51 + 1) = v20;
    v21 = 256;
    v22 = &v51;
LABEL_38:
    result = sub_180039C68(a2 + 8, (__int64)v22, *(_DWORD *)a2, v21);
    goto LABEL_39;
  }
  if ( *(_BYTE *)(a2 + 5) )
  {
    sub_180015F14(v4, &v63, 1u);
    v23 = (_QWORD *)(a1 + 192);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 192), &v63);
    v24 = v64;
    if ( v64 )
    {
      if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
    }
    sub_180064684(*v23, 2LL);
    v52 = 0LL;
    v25 = *(_QWORD *)(a1 + 200);
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
      v25 = *(_QWORD *)(a1 + 200);
    }
    *(_QWORD *)&v52 = *v23;
    *((_QWORD *)&v52 + 1) = v25;
    v21 = 1024;
    v22 = &v52;
    goto LABEL_38;
  }
LABEL_39:
  if ( *(_BYTE *)(a2 + 5) )
  {
    v26 = (_QWORD *)(a1 + 192);
    if ( !*(_QWORD *)(a1 + 192) )
    {
      v83 = 0uLL;
      sub_18009EC74(*(_QWORD *)(a1 + 144), &v83, *(unsigned int *)(a1 + 88));
      v82 = 0LL;
      if ( *((_QWORD *)&v83 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v83 + 1) + 8LL));
      v65 = v83;
      v27 = sub_1800171D4(&v72, (__int64 *)&v65);
      sub_18003178C(*v27, &v82);
      v28 = v73;
      if ( v73 )
      {
        if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        }
      }
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v82 + 80LL))(v82, v88);
      v87 = 0LL;
      v84 = 47;
      v85 = 4LL;
      v86 = v89;
      v81 = 0LL;
      v29 = *sub_18002328C(v12, &v47);
      v30 = v81;
      if ( v81 )
      {
        v81 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
      }
      v31 = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64 **))(*(_QWORD *)v29 + 56LL))(
              v29,
              v82,
              &v84,
              &v81);
      v32 = v47;
      if ( v47 )
      {
        v47 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      sub_1800254C0(v12, v31);
      if ( v31 < 0 )
      {
        sub_18000E4E8(v79);
        v46 = (unsigned int)sub_18000E4E8(v78);
        sub_18006586C((unsigned int)pExceptionObject, v46, 362, (unsigned int)v79, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v33 = sub_180064408(a1, v76);
      if ( *(_QWORD *)(v33 + 24) >= 0x10uLL )
        v33 = *(_QWORD *)v33;
      sub_18000EE78(v81, (const char *)v33);
      if ( v77 >= 0x10 )
      {
        v34 = v76[0];
        if ( v77 + 1 >= 0x1000 )
        {
          v34 = *(_QWORD *)(v76[0] - 8LL);
          if ( (unsigned __int64)(v76[0] - v34 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v34, v77 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v34);
      }
      v57 = 0LL;
      v58 = 0LL;
      v35 = sub_180015A44(v12, &v74);
      v36 = (_QWORD *)*v35;
      v37 = (volatile signed __int32 *)v35[1];
      if ( v37 )
      {
        _InterlockedIncrement(v37 + 2);
        v37 = (volatile signed __int32 *)v35[1];
      }
      v57 = v36;
      v58 = v37;
      v38 = v75;
      if ( v75 )
      {
        if ( _InterlockedExchangeAdd(v75 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v38)(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        }
      }
      v48 = v81;
      if ( v81 )
        (*(void (__fastcall **)(__int64 *))(*v81 + 8))(v81);
      v49 = v82;
      if ( v82 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 8LL))(v82);
      sub_18002EB1C(v36, (char *)&v49, (char *)&v48, 0x400u);
      sub_180015F14(v54, &v66, 1u);
      std::shared_ptr<__ExceptionPtr>::operator=(v26, &v66);
      v39 = v67;
      if ( v67 )
      {
        if ( _InterlockedExchangeAdd(v67 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        }
      }
      sub_180064684(*v26, 2LL);
      v53 = 0LL;
      if ( v37 )
        _InterlockedIncrement(v37 + 2);
      *(_QWORD *)&v53 = v36;
      *((_QWORD *)&v53 + 1) = v37;
      result = sub_18009DF38(*v26);
      v40 = (volatile signed __int32 *)*((_QWORD *)&v53 + 1);
      if ( *((_QWORD *)&v53 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
          result = (unsigned int)_InterlockedDecrement(v40 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        }
      }
      if ( v37 )
      {
        result = (unsigned int)_InterlockedDecrement(v37 + 2);
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
          result = (unsigned int)_InterlockedDecrement(v37 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        }
      }
      v41 = v81;
      if ( v81 )
      {
        v81 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64 *))(*v41 + 16))(v41);
      }
      v42 = v82;
      if ( v82 )
      {
        v82 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      v43 = (volatile signed __int32 *)*((_QWORD *)&v83 + 1);
      if ( *((_QWORD *)&v83 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v83 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
          result = (unsigned int)_InterlockedDecrement(v43 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
        }
      }
    }
  }
  if ( v13 )
  {
    v44 = _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF);
    v17 = v44 == 1;
    result = (unsigned int)(v44 - 1);
    if ( v17 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v45 = *(_QWORD *)(v8 + 56);
  if ( v45 )
  {
    LOBYTE(v14) = v45 != v8;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 32LL))(v45, v14);
    *(_QWORD *)(v8 + 56) = 0LL;
  }
  return result;
}
