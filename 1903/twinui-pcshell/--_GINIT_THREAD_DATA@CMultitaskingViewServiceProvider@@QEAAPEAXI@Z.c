/*
 * XREFs of ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x18033FD00
 * Callers:
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x180340C34 (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x180342120 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180087AB0 (--3@YAXPEAX@Z.c)
 *     ??1INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x18033FA68 (--1INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 */

CMultitaskingViewServiceProvider::INIT_THREAD_DATA *__fastcall CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(
        CMultitaskingViewServiceProvider::INIT_THREAD_DATA *this)
{
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA::~INIT_THREAD_DATA(this);
  operator delete(this);
  return this;
}
